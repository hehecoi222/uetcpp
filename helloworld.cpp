#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int **mat = new int*[10];
    for (int i = 0; i < 10; i++) {
        mat[i] = new int[10];
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}