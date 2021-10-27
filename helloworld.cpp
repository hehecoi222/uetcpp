#include <bits/stdc++.h>
#include <string>
using namespace std;

bool checkMap(string s, unordered_map<char,int> Map){
    for (auto i=s.begin();i!=s.end();i++){
        Map[*i]--;
    }
    for (auto i=Map.begin();i!=Map.end();i++){
        if (i->second > 0) {
            return false;
        }
    }
    return true;
}

int checkString(string s1, string s2,int j){
    unordered_map<char,int> Map;
    for (auto i=s1.begin();i!=s1.end();i++){
        if (Map[*i] >100) Map[*i]=0;
        Map[*i]++;
    }
    int sum=0;
    for (int i=j+1;i<s2.length()-s1.length()+1;i++){
        string temp=s2.substr(i,s1.length());
        if (checkMap(temp,Map)) {
            sum++;
        }
    }
    return sum;
}


int check() {
  string s;
  cin >> s;
  int sum=0;

  for (int i=1;i< s.length();i++){
      for (int j=0;j<s.length()-i;j++){
          string temp = s.substr(j,i);
          sum += checkString(temp,s,j);
      }
  }
  return sum;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int q;
  cin >> q;
  for (int i = 0; i < q; i++) {
    cout << check() << endl;
  }
}