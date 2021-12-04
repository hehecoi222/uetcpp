#include <bits/stdc++.h>
using namespace std;

int main()
{
    char *path = new char[100];
    cin >> path;
    ifstream file(path,ios::binary);
    if(!file.is_open())
    {
        cout << "File not found" << endl;
        return 1;
    }
    for (;!file.eof();)
    {
        int n;
        file.read((char*)&n,sizeof(n));
        cout << n << " " ;
    }
    file.close();
}