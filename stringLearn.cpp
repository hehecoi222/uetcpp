#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> HeightRow;
    vector<int> Position;
    for (int i=0;i<n;i+=2) {
        int man,women;
        cin >> man >> women;
        HeightRow.push_back(women);
        HeightRow.push_back(man);
        Position.push_back(i);
        Position.push_back(i+1);
    }
}