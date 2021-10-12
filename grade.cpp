#include <bits/stdc++.h>
using namespace std;

int main() {
    int cc;
    cin >> cc;
    vector<double> th;
    for (int i=0; i<10;i++) {
        double temp;
        cin >> temp;
        if (temp != 0) cc++; 
        th.push_back(temp);
    }
    sort(th.begin(),th.end());
    
}
