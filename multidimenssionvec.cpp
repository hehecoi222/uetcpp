#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int m, n, q;
    cin >> m >> n >> q;
    vector<vector<int>> store(m, vector<int>(n));
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> store[i][j];
        }
    }
    for (int i = 0; i < q; i++)
    {
        int tempr, tempc;
        cin >> tempr >> tempc;
        printf("%d\n", store[tempr - 1][tempc - 1]);
    }
}