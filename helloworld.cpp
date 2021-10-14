#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin >> n;
   if (n<1 || n >30)
       return 0;
   for (int i = 0; i < n; i++)
   {
       int temp;
       cin >> temp;
       if (temp >= 0) {
           printf("%d ", i + 1);
       }
   }
}
