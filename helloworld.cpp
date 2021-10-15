#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    double sum=0;
    for (int i=1; i<=n;i++) {
        sum += ((double)i)/(i+1);
    }
    printf("%.5f",sum);
}