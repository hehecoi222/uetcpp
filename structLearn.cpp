#include <bits/stdc++.h>
using namespace std;

struct Vector {
    double X, Y;
    int VectorAddition(Vector &v) {
        X += v.X;
        Y += v.Y;
        return 0;
    }
};

int Nhap(Vector &v) {
    cout << "Nhap toa do X: ";
    cin >> v.X;
    cout << "Nhap toa do Y: ";
    cin >> v.Y;
    return 0;
}

int Xuat(Vector v) {
    cout << "(" << v.X << ", " << v.Y << ")" << endl;
    return 0;
}

int main() {
    Vector v1, v2;
    cout << "Nhap v1: ";
    Nhap(v1);
    cout << "Nhap v2: ";
    Nhap(v2);
    cout << "v1: ";
    Xuat(v1);
    cout << "v2: ";
    Xuat(v2);
    cout << "Tong 2 vector: ";
    v1.VectorAddition(v2);
    Xuat(v1);
    return 0;
}