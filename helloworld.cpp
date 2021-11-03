#include <bits/stdc++.h>
using namespace std;

int InMat(vector<vector<int>> mat, int m,int n) {
    for (int i=0;i<m;i++){
        vector<int> temp;
        for (int j=0;j<n;j++){
            int tempNum;
            cin >> tempNum;
            temp.push_back(tempNum);
        }
        mat.push_back(temp);
    }
    return 0;
}

int OutMat(vector<vector<int>> mat, int m,int n) {
    for (int i=0;i<m;i++){
        for (int j=0;j<n;j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

int main() {
    vector<vector<int>> Set;
    int n, m;
    printf("Please input the number of rows and columns: ");
    cin >> m >> n;
    printf("Please input the matrix: ");
    InMat(Set, m, n);
    printf("The matrix is: ");
    OutMat(Set, m, n);
}