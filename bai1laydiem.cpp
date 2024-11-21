#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

// Ham chuan hoa mot xau ho ten
void chuanHoa(char* str) {
    int n = strlen(str);
    char result[81] = "";  // Xau ket qua chuan hoa
    int idx = 0;           // Vi tri trong xau ket qua
    int capitalize = 1;    // Bien de viet hoa chu cai dau

    for (int i = 0; i < n; i++) {
        if (str[i] != ' ') {
            // Viet hoa chu cai dau tu
            if (capitalize) {
                result[idx++] = toupper(str[i]);
                capitalize = 0;
            } else {
                // Cac ky tu khac viet thuong
                result[idx++] = tolower(str[i]);
            }
        } else {
            // Neu gap dau cach
            if (idx > 0 && result[idx - 1] != ' ') {
                result[idx++] = ' ';  // Chi them dau cach khi can
            }
            capitalize = 1;  // San sang viet hoa tu moi
        }
    }

    // Loai bo dau cach thua o cuoi xau
    if (idx > 0 && result[idx - 1] == ' ') {
        result[idx - 1] = '\0';
    } else {
        result[idx] = '\0';
    }

    // Ghi ket qua lai vao xau ban dau
    strcpy(str, result);
}

int main() {
    int T;
    char name[81];  // Xau ho ten toi da 80 ky tu

    // Nhap so bo test
    cin >> T;
    cin.ignore();  // Bo qua ky tu newline sau khi nhap so bo test

    for (int t = 0; t < T; t++) {
        // Nhap xau ho ten
        cin.getline(name, sizeof(name));

        // Chuan hoa xau ho ten
        chuanHoa(name);

        // In xau da chuan hoa
        cout << name << endl;
    }

    return 0;
}
