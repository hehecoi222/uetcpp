#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <fstream>
#include <unordered_map>
using namespace std;

double estimatedTime(const char* path) {
    ifstream fin(path);
    if (!fin) {
        cout << "File not found" << endl;
        return 1;
    }
    double X[2],Y[2];
    double veloc;
    for (int i=0;!fin.eof();) {
        string info;
        fin >> info;
        if (fin) {
            if (info == "X:") {
                double x,y;
                fin >> x;
                X[i] = x;
                string temp;
                fin >> temp;
                fin >> y;
                Y[i] = y;
                i++;
            } else if (info == "VELOCITY:") {
                fin >> veloc;
            }
        }
    }
    double distance = 0,disX=X[1]-X[0],disY=Y[1]-Y[0];
    distance = sqrt(disX*disX + disY*disY);
    return distance/veloc;
}

int main() {

}