#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

   int n;
   cin >> n;
   double sum =0;
   int man = 0;
   for (int i = 0; i < n; i++)
   {
       double temp;
       int hs;
       cin >> temp >> hs;
       sum += temp*hs;
       man += hs;
   }
   printf("%.2f", sum / man);
}
