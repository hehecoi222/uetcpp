#include <iostream>
#include <ctype.h>
using namespace std;

int main()
{
    cout << "Chuong trinh giai tro choi doan so khoa 1-100\nNhap U neu so doan cao hon, L neu thap hon, O neu thanh cong\n";
    cout << "Hay nhap vao tro choi so dau tien: 50 va ghi ket qua lai chuong trinh nay\n";
    int stack = 25;
    for (int guessNum = 50;; stack /= 2)
    {
        cout << "Nhap ket qua tra ve: ";
        char inputConsole;
        cin >> inputConsole;
        inputConsole = (char)tolower(inputConsole);
        switch (inputConsole)
        {
        case 'l':
            guessNum += stack;
            cout << "So nhap vao tro choi tiep theo:" << guessNum << endl;
            continue;
        case 'u':
            guessNum -= stack;
            cout << "So nhap vao tro choi tiep theo:" << guessNum << endl;
            continue;
        case 'o':
            cout << "Cam on ban su dung chuong trinh\n";
            break;
        default:
            cout << "Ki hieu khong ro, moi nhap lai\n";
            continue;
        }
        break;
    }
    return 0;
}