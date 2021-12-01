#include <bits/stdc++.h>
using namespace std;

int integerReplacement (char * path) {
    ifstream fin(path);
    if (!fin.is_open()) {
        cout << "File not found" << endl;
        return -1;
    }
    long int n;
    fin >> n;
    vector<int> arr;
    arr.push_back(0);
    arr.push_back(0);
    arr.push_back(1);
    for (long int i=3;i<=n;i++) {
        if (i%2 ==0) {
            arr.push_back(arr[i/2]+1);
        } else {
            arr.push_back(min(arr[i-1],1+arr[(i+1)/2]) +1);
        }
    }
    fin.close();
    return arr[n];
}

int main() {
    cout << integerReplacement("data/1.txt");
    return 0;
}