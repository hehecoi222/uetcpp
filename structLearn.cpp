#include <bits/stdc++.h>
using namespace std;

struct DiemSo {
    double Toan,Ly,DiemTB;
};

int main() {
    const int SoSV = 10;
    DiemSo SV[SoSV];
    for (int i = 0; i < SoSV; i++) {
        cout << "Nhap diem Toan, Ly cua sinh vien thu " << i + 1 << ": ";
        cin >> SV[i].Toan >> SV[i].Ly;
        SV[i].DiemTB = (SV[i].Toan + SV[i].Ly) / 2;
    }
    cout << "Danh sach diem so cua cac sinh vien: " << endl;
    for (int i = 0; i < SoSV; i++) {
        cout << "Sinh vien thu " << i + 1 << ": " << SV[i].Toan << " " << SV[i].Ly << " " << SV[i].DiemTB << endl;
    }
    return 0;
}