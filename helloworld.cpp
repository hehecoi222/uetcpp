#include <iostream>
using namespace std;

int main()
{
    int c1, c2;
    int a = 0;
    int b = 0;

    cin >> c1 >> c2;

    if (c1 > c2)
    {
        printf("invalid");
    }
    if ((((4 * c1) - c2) % 2 == 0) && ((((4 * c1) - c2) / 2) <= c1))
    {
        b = ((4 * c1) - c2) / 2;
        a = c1 - b;
        printf("chicken = %d, dog = %d", b, a);
    }
    else
    {
        printf("invalid");
    }
}