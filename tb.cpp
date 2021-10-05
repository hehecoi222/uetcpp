#include <iostream>
#include <ctype.h>

using namespace std;

int main()
{
    char c;
    cin >> c;
    if (tolower(c) == c)
    {
        printf("%c", toupper(c));
    }
    else
    {
        printf(c);
    };
}
