#include <bits/stdc++.h>
using namespace std;

bool check(int n)
{  
   if (n==2) {
      return true;
   }else if (n < 2 || n % 2 == 0)
      return false;
   for (int i = 3; i <= sqrt(n); i += 2)
   {
      if (n % i == 0)
         return false;
   }
   return true;
}

int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int n;
   cin >> n;
   vector<int> A;
   unordered_map<int, bool> PrimeMap;
   vector<int> Prime;
   for (int i = 0; i < n; i++)
   {
      int temp;
      cin >> temp;
      A.push_back(temp);
      PrimeMap[i] = check(temp);
      if (PrimeMap[i] == true)
      {
         Prime.push_back(temp);
      }
   }
   sort(Prime.begin(), Prime.end());
   for (int i = 0, j = 0; i < n; i++)
   {
      if (PrimeMap[i])
      {
         A[i] = Prime[j];
         j++;
      }
   }
   for (auto i = A.begin(); i != A.end(); i++)
   {
      printf("%d ", *i);
   }
}
