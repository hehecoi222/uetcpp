#include <bits/stdc++.h>
using namespace std;

int main() {
    char *path = new char[100];
    cin >> path;
    ifstream file(path,ios::binary);
    if (!file) {
        cout << "NO" << endl;
        return 0;
    } else {
        cout << "YES" << endl;
    }
    file.close();
}