#include <bits/stdc++.h>
using namespace std;



double power(double x,int n) {
    double temp=1;
    if (n == 0)
    {
        return 1;
    }
    else if (n == 1)
    {
        return temp;
    }
    for (;(n!= 0 && n!=1); )
    {
        if (n % 2 ==0) {
            temp *= x * x;
            n -= 2;
        } else if (n % 2 ==1) {
            temp *= x;
            n--;
        }
    }
    return temp;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long x;
    int n;
    cin >> x >> n;
    printf("%d", (int)(x * (power((1 + 0.007), n))));
}
