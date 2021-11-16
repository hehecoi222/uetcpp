#include <bits/stdc++.h>
using namespace std;

struct DiemSo {
    double Toan,Ly,DiemTB;
};

struct SinhVien {
    string HoTen;
    int NamSinh;
    DiemSo Diem;
};

int main() {
    const int SoSV = 10;
    SinhVien SV[SoSV];
    for (int i = 0; i < SoSV; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        cout << "Ho ten: ";
        getline(cin, SV[i].HoTen);
        cout << "Nam sinh: ";
        cin >> SV[i].NamSinh;
        cin.ignore();
        cout << "Diem toan: ";
        cin >> SV[i].Diem.Toan;
        cout << "Diem ly: ";
        cin >> SV[i].Diem.Ly;
        SV[i].Diem.DiemTB = (SV[i].Diem.Toan + SV[i].Diem.Ly) / 2;
    }
    cout << "Thong tin sinh vien" << endl;
    for (int i = 0; i < SoSV; i++) {
        cout << "Ho ten: " << SV[i].HoTen << endl;
        cout << "Nam sinh: " << SV[i].NamSinh << endl;
        cout << "Diem toan: " << SV[i].Diem.Toan << endl;
        cout << "Diem ly: " << SV[i].Diem.Ly << endl;
        cout << "Diem TB: " << SV[i].Diem.DiemTB << endl;
    }
    return 0;
}