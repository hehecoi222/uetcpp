#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int dem=0;
    for (;n!=0;){
        if (n % 2==0) {
            n /= 2;
            dem++;
        } else {
            n--;
        }
    }
    printf("%d", dem);
}
