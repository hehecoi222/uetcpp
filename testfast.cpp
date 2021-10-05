#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    double x;
    if ((a == 0) && (b == 0))
        {
            cout << "Phuong trinh vo so nghiem";
        }
    else if (a == 0)
    {
        cout << b;
    }
    else
    {
        cout << -b/a;
    }
    return 0;
}