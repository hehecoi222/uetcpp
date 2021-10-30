#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for (int a=1;a<n;a++){
        if ((a*a*a)*2 > n) break;
        for (int b=a+1;b<n;b++){
            long tong = a*a*a + b*b*b;
            if (tong > n) {
                break;
            }
            for (int c=a+1;c<b;c++){
                for (int d =c+1;d<n;d++){
                    if (c*c*c + d*d*d > tong) {
                        break;
                    } else if (c*c*c + d*d*d == tong){
                        cout << c*c*c + d*d*d << " " << a << " " << b << " " << c << " " << d << endl;
                    }
                }
            }
        }
    }
    return 0;
}