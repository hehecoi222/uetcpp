#include <bits/stdc++.h>
using namespace std;

struct Dathuc {
    int Bac;
    vector<double> Co;
};

int Nhap(Dathuc &a) {
    cout << "Nhap bac cua dathuc: ";
    cin >> a.Bac;
    if (a.Bac < 0) {
        cout << "Bac phai lon hon hoac bang 0" << endl;
        return 1;
    }
    cout << "Nhap cac co cua dathuc: ";
    for (int i = 0; i <= a.Bac; i++) {
        double temp;
        cin >> temp;
        a.Co.push_back(temp);
    }
    return 0;
}

int Xuat(Dathuc a) {
    cout << "Dathuc: ";
    for (int i = 0; i < a.Bac; i++) {
        cout << a.Co[i] << "x^" << a.Bac - i << " + ";
    }
    cout << a.Co[a.Bac] << endl;
    return 0;
}

int Tong(Dathuc a, Dathuc b, Dathuc &c) {
    if (a.Bac > b.Bac) {
        c.Bac = a.Bac;
    } else {
        c.Bac = b.Bac;
    }
    for (int i = 0; i <= c.Bac; i++) {
        if (i > b.Bac) {
            c.Co.push_back(a.Co[i]);
            continue;
        } else if (i > a.Bac) {
            c.Co.push_back(b.Co[i]);
            continue;
        }
        double temp = a.Co[i] + b.Co[i];
        c.Co.push_back(temp);
    }
    return 0;
}

int main() {
    Dathuc a, b, c;
    cout << "Nhap dathuc thu nhat: ";
    Nhap(a);
    cout << "Nhap dathuc thu hai: ";
    Nhap(b);
    cout << "Tong 2 dathuc: ";
    Tong(a, b, c);
    Xuat(c);
    return 0;
}