#include <bits/stdc++.h>
using namespace std;

struct DiemSo {
    double Toan,Ly,DiemTB;
};

struct SinhVien {
    string HoTen;
    string NamSinh;
    int SBD;
    DiemSo Diem;
};

int main() {
    const int SoSV = 3;
    SinhVien SV[SoSV];
    for (int i = 0; i < SoSV; i++) {
        cout << "Nhap thong tin sinh vien thu " << i + 1 << endl;
        cout << "Nhap ho ten: ";
        getline(cin, SV[i].HoTen);
        cout << "Nhap nam sinh: ";
        getline(cin, SV[i].NamSinh);
        cout << "Nhap so bao danh: ";
        cin >> SV[i].SBD;
        cout << "Nhap diem toan: ";
        cin >> SV[i].Diem.Toan;
        cout << "Nhap diem ly: ";
        cin >> SV[i].Diem.Ly;
        cin.ignore();
        SV[i].Diem.DiemTB = (SV[i].Diem.Toan + SV[i].Diem.Ly) / 2;
    }
    cout << "Thong tin sinh vien" << endl;
    for (int i = 0; i < SoSV; i++) {
        cout << "Ho ten: " << SV[i].HoTen << endl;
        cout << "Nam sinh: " << SV[i].NamSinh << endl;
        cout << "So bao danh: " << SV[i].SBD << endl;
        cout << "Diem toan: " << SV[i].Diem.Toan << endl;
        cout << "Diem ly: " << SV[i].Diem.Ly << endl;
        cout << "Diem trung binh: " << SV[i].Diem.DiemTB << endl;
    }
    return 0;
}