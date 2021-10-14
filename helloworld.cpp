#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >>n;
    vector <double> narray;
    double sum =0;
    for (int i =0;i<n;i++){
	    double temp;
	    cin >> temp;
	    sum += temp;
	    narray.push_back(temp);
	}
    sum /= n;
    for (int i =0; i<n;i++){
    	if (narray[i] >= sum) {
		printf("%.2f ",narray[i]);
	}
    }
}
