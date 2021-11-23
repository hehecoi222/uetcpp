#include <bits/stdc++.h>
using namespace std;

struct Student {
    string name;
    int SBD;
    double AveScore;
};

int RedefineName(Student &student) {
    if (student.name.length() == 0) {
        return 0;
    }
    // Xoa dau cach thua o dau
    for (int i=0; i<student.name.length(); i++){
        if (student.name[i] != ' ') {
            student.name = student.name.substr(i, student.name.length()-i);
            break;
        }
    }
    // Xoa dau cach thua o giua
    for (int i=0; i<student.name.length();){
        if (student.name[i] == ' ' && student.name[i+1] == ' ') {
            student.name = student.name.substr(0, i) + student.name.substr(i+1, student.name.length()-i-1);
        } else i++;
    }
    // Viet hoa chu dau
    student.name[0] = toupper(student.name[0]);
    for (int i=1; i<student.name.length(); i++) {
        if (student.name[i-1] == ' ') {
            student.name[i] = toupper(student.name[i]);
        } else {
            student.name[i] = tolower(student.name[i]);
        }
    }
    return 0;
}

int Less(Student a, Student b){
    if (a.AveScore < b.AveScore) {
        return 1;
    } else return 0;
}

int Swap(Student &a, Student &b) {
    Student temp = a;
    a = b;
    b = temp;
    return 0;
}

int Sort(Student *student, int n) {
    for (int i=0; i<n-1; i++) {
        for (int j=i+1; j<n; j++) {
            if (Less(student[i], student[j])) {
                Swap(student[i], student[j]);
            }
        }
    }
    return 0;
}

Student *GetIn(int n){
    Student *student = new Student[n];
    for (int i=0; i< n ; i++) {
        cout << "Nhap thong tin sinh vien thu " << i+1 << endl;
        cout << "Nhap ten sinh vien: ";
        getline(cin, student[i].name);
        cout << "Nhap SBD: ";
        cin >> student[i].SBD;
        cout << "Nhap diem trung binh: ";
        cin >> student[i].AveScore;
        cin.ignore();
        RedefineName(student[i]);
    }
    return student;
}

int Print(Student *student, int n) {
    for (int i=0; i<n; i++) {
        cout << "Thong tin sinh vien diem cao thu " << i+1 << endl;
        cout << student[i].name << " SBD: " << student[i].SBD << " Diem trung binh: " << student[i].AveScore << endl;
    }
    return 0;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    Student *student = GetIn(n);
    Sort(student, n);
    Print(student, (n > 3) ? 3 : n);
    return 0;
}