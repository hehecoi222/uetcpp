#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int sum = 1;
    for (int i = 2; i < sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += i + n / i;
            if (sum > n)
            {
                printf("no");
                return 0;
            }
        }
    }
    if (sum = n)
    {
        printf("yes");
    }
    else
        printf("no");
}
