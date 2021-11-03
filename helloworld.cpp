#include <bits/stdc++.h>
using namespace std;

long SumofSquare(int n) {
    if (n==1) {
        return 1;
    } else {
        return n*n + SumofSquare(n-1);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    cout << SumofSquare(n);
}