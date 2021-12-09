#include <bits/stdc++.h>
using namespace std;

int Determinant(vector<vector<int>> Matrix) {
    int det=0;
    for (int i=0;i<3;i++) {
        vector<int> temp;
        for (int j=1;j<3;j++) {
            for (int k=0;k<3;k++){
                if (k!=i) {
                    temp.push_back(Matrix[j][k]);
                }
            }
        }
        int tempDet = temp[0]*temp[3]-temp[1]*temp[2];
        det += pow(-1,i)*Matrix[0][i]*tempDet;
    }
    return det;
}

int main() {
    vector<vector<int>> Mat;
    for (int i=0;i<3;i++) {
        vector<int> row;
        for (int j=0;j<3;j++) {
            int x;
            cin >> x;
            row.push_back(x);
        }
        Mat.push_back(row);
    }
    cout << Determinant(Mat) << endl;
}