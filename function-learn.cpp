#include <iostream>
using namespace std;

int f(int a, int b) {
	return a*a*a+2*a*a*b + 3*a*b*b + 4*b*b*b;
}

int main() {
	cout << f(2,1) << endl;
}
