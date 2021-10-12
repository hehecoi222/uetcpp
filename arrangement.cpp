#include <iostream>
#include <math.h>
using namespace std;

bool isTriangle(int a,int b,int c) {
	if ( a <=0 || b <=0 || c <=0) {
		return false;
	} else if ( a+b <= c || a+c <= b || b+c <= a) {
		return false;
	} else return true;
}

bool isRegular (int a, int b, int c) {
	if (a==b && b==c) return true;
	return false;
}

bool isIsosceles(int a, int b, int c) {
	if (a==b || b==c || a==c) return true;
	return false;
}

bool isRightAngle(int a, int b, int c) {
	if (sqrt(a*a+b*b)==c || sqrt(c*c+b*b)==a || sqrt(a*a+c*c)==b) return true;
	return false;
}

int main() {
	int a,b,c;
	cin >> a >> b >> c;
	if (!isTriangle(a,b,c)){
		cout << "Khong la tam giac";
		return 0;
	} else if (isRegular(a,b,c)){
		cout << "La tam giac deu";
		return 0;
	} else if (isRightAngle(a,b,c)) {
		cout << "La tam giac vuong";
		if (isIsosceles(a,b,c)) {
		cout << "La tam giac can";
	}
	return 0;
	} 
	if (isIsosceles(a,b,c)) {
		cout << "La tam giac can";
	} else cout << "La tam giac thuong";
}
