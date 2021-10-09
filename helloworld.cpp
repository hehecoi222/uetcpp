#include <bits/stdc++.h>
#define phi(n) pow((1 - sqrt(5)) / 2, n)
#define PHI(n) pow((1 + sqrt(5)) / 2, n)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    double a;
    a = (PHI(n) + phi(n)) / sqrt(5);
    cout << int(a);
}