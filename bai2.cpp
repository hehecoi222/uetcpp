#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    cout << "Nhap vo 3 so: ";
    double a, b, c;
    cin >> a >> b >> c;
    cout << "So lon nhat la: " << max(max(a, c), b) << endl;
    return 0;
}