#include <iostream>
using namespace std;

int main()
{
    cout << "Tro choi doan so\nDoan so trong khoan tu 1 toi 100\nNhap so ban doan cho toi khi dung thi chuong trinh ket thuc\n";
    int mysNum = rand() % 100 + 1;
    for (int numGuess; numGuess != mysNum;)
    {
        cout << "Moi nhap so nguyen N: ";
        cin >> numGuess;
        if (numGuess > mysNum)
        {
            cout << "So ban nhap LON hon so can tim\n";
        }
        else if (numGuess < mysNum)
        {
            cout << "So ban nhap NHO hon so can tim\n";
        }
        else
        {
            cout << "Ban da doan trung, cam on\n";
        }
    }
    return 0;
}