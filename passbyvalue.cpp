#include <iostream>
using namespace std;

void thayDoiTruyenGiaTri(int v);

int main() {
	int var = 5;
	thayDoiTruyenGiaTri(var);
	cout << "main: var" << var << endl;
}

void thayDoiTruyenGiaTri(int v) {
	v *=10;
	cout << "ham: v=" << v << endl;
}

