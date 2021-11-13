#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char *path = new char[100];
    cin >> path;
    ifstream file(path,ios::binary);
    if(!file.is_open())
    {
        cout << "File not found" << endl;
        return 1;
    }
    int temp=0;
    do {
        char c;
        file.get(c);
        if (c == temp)
            continue;
        temp = c;
        cout << c;
    } while(!file.eof());
    file.close();
}