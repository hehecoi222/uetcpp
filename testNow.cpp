#include <bits/stdc++.h>
using namespace std;

string reverse(string s) {
    string r = "";
    for (int i = s.size() - 1; i >= 0; i--) {
        r += s[i];
    }
    return r;
}

string multiply(string s, int n) {
    string ans= "";
    int j =0;
    for (int i=0; i<s.size(); i++) {
        int x = (s[i] - '0')*n;
        while (x) {
            ans += (x % 10) + '0';
            x /= 10;
        }
    }
    return ans;
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    cout << multiply(s, n) << endl;
}