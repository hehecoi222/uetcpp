#include <iostream>
using namespace std;

int main() {
	int so_ND, tong = 0;
	int dem = 1;
	while (dem <= 4) {
		cin >> so_ND;
		if (so_ND <0) {
			break;
		};
		tong = tong + so_ND;
		dem++;
	}
	cout << tong;
}
