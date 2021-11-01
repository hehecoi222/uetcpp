#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin >> s;
    int sum = 0;
    for (int i = 10; i > 1; i--){
        sum += (s[s.length()-i+1] - '0') * i;
    }
    int c = 11-(sum % 11);
    if (c != 0 && c<10) {
    cout << s[0] << "-" << s.substr(1,3) << "-" << s.substr(4,5) << "-" << c; 
    } else {
        
    cout << s[0] << "-" << s.substr(1,3) << "-" << s.substr(4,5) << "-" << 'X'; 
    }
        return 0;
}