#include <iostream>
#include <vector>

using namespace std;

// Ham tinh tich ma tran A voi ma tran chuyen vi cua no
void tinhTichMaTran(int n, int m, vector<vector<int>>& A) {
    vector<vector<int>> At(m, vector<int>(n));   // Ma tran chuyen vi cua A
    vector<vector<int>> C(n, vector<int>(n));     // Ma tran tich

    // Tao ma tran chuyen vi At
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            At[j][i] = A[i][j];
        }
    }

    // Tinh ma tran tich C = A * At
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            C[i][j] = 0;
            for (int k = 0; k < m; k++) {
                C[i][j] += A[i][k] * At[k][j];
            }
        }
    }

    // In ket qua
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int T;
    cin >> T; // Nhap so bo test

    for (int t = 1; t <= T; t++) {
        int n, m;
        cin >> n >> m; // Nhap so hang va so cot cua ma tran (n m)

        vector<vector<int>> A(n, vector<int>(m));

        // Nhap ma tran A
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> A[i][j];
            }
        }

        // In thu tu bo test
        cout << "Test " << t << ":" << endl;

        // Goi ham tinh tich ma tran
        tinhTichMaTran(n, m, A);
    }

    return 0;
}
