#include <iostream>
using namespace std;

bool chiahet(int a, int b){
	if (a%b ==0 || b%a==0) {
		return true;
	}
	return false;
}

int main() {
	cout << chiahet(2,4) << endl;
	return 0;
}
