#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin >>n;
   vector<int> inp;
   for (int i =0; i<n;i++){
   	int temp;
	cin >> temp;
	inp.push_back(temp);
   }
   vector<int> seq;
   vector<bool> check;
   seq.assign(100000, 0);
   check.assign(100000, false);
   for (int i = 0; i < n; i++)
   {
       seq[inp[i]]++;
   }
   for (int i=0;i<n;i++){
    if (seq[inp[i]] == 0 && check[inp[i]])
        continue;
    printf("%d %d\n", inp[i], seq[inp[i]]);
    check[inp[i]] = true;
   }
}
