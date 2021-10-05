#include <iostream>
using namespace std;

int main()
{
    cout << "Nhap vao 1 so nguyen thuoc N: ";
    int a;
    cin >> a;
    if (a % 2 == 0)
    {
        cout << a << " la so chan\n";
    }
    else
    {
        cout << a << " la so le\n";
    }
    return 0;
}