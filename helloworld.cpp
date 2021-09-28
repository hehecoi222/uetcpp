//  Tinh tong hieu 2 so nguyen
#include <iostream>

using namespace std;

int main()
{
    int soThu1,soThu2;
    cout << "Nhap vao so nguyen dau tien: ";
    cin >> soThu1;
    cout << "Nhap so nguyen tiep theo: ";
    cin >>soThu2;
    int tong,hieu;
    tong = soThu1 + soThu2;
    hieu = soThu1 - soThu2;
    cout << "Tong: " << tong << endl;
    cout << "Hieu: " << hieu << endl;
    return 0;
}
