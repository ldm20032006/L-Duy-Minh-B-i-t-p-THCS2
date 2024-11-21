#include <iostream>
#include <string>
#include <iomanip> // Thu vien dung de in dinh dang

using namespace std;

// Cau truc de luu thong tin thi sinh
struct ThiSinh {
    int maThiSinh;     // Ma thi sinh
    string ten;        // Ten thi sinh
    string ngaySinh;   // Ngay sinh
    float diem1, diem2, diem3; // Diem 3 mon thi
    float tongDiem;    // Tong diem
};

// Ham nhap mot dong chuoi
void nhapChuoi(string& s) {
    getline(cin, s); // Doc mot dong chuoi
}

// Ham sap xep thi sinh theo ma so tang dan
void sapXepTheoMaHocSinh(ThiSinh ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (ds[j].maThiSinh > ds[j + 1].maThiSinh) {
                swap(ds[j], ds[j + 1]); // Hoan doi hai thi sinh
            }
        }
    }
}

int main() {
    int n;
    cin >> n;
    cin.ignore(); // Loai bo ky tu newline sau khi nhap so thi sinh

    ThiSinh ds[100]; // Mang luu danh sach thi sinh

    // Nhap thong tin thi sinh
    for (int i = 0; i < n; i++) {
        ds[i].maThiSinh = i + 1; // Ma thi sinh tu dong tang
        nhapChuoi(ds[i].ten);     // Nhap ten thi sinh
        nhapChuoi(ds[i].ngaySinh); // Nhap ngay sinh thi sinh
        cin >> ds[i].diem1 >> ds[i].diem2 >> ds[i].diem3; // Nhap diem thi
        cin.ignore(); // Loai bo ky tu xuong dong sau khi nhap diem

        ds[i].tongDiem = ds[i].diem1 + ds[i].diem2 + ds[i].diem3; // Tinh tong diem
    }

    // Tim tong diem cao nhat
    float maxDiem = ds[0].tongDiem;
    for (int i = 1; i < n; i++) {
        if (ds[i].tongDiem > maxDiem) {
            maxDiem = ds[i].tongDiem; // Cap nhat diem cao nhat
        }
    }

    // Sap xep danh sach thi sinh theo ma thi sinh tang dan
    sapXepTheoMaHocSinh(ds, n);

    // In ra cac thi sinh co tong diem bang maxDiem
    cout << "Thu khoa:\n";
    for (int i = 0; i < n; i++) {
        if (ds[i].tongDiem == maxDiem) {
            // In ra thong tin thi sinh, dinh dang diem thi voi 1 chu so thap phan
            cout << ds[i].maThiSinh << " " << ds[i].ten << " " << ds[i].ngaySinh << " " 
                 << fixed << setprecision(1) << ds[i].tongDiem << endl;
        }
    }

    return 0;
}
