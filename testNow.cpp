#include <bits/stdc++.h>
using namespace std;

int findRadius(vector<int> houses, vector<int> heaters) {
    if (houses.empty() || heaters.empty()) return 0;
    if( houses.size() < heaters.size() && *houses.end() > *heaters.end()) return 0;
    int res = 0;
    for (auto i = houses.begin(); i != houses.end();i++){
        int min_dis = INT_MAX;
        for (auto j = heaters.begin(); j != heaters.end();j++){
            int dis = abs(*i - *j);
            if (dis < min_dis)
                min_dis = dis;
        }
        res = max(res, min_dis);
    }
    return res;
}

int main(){
    vector<int> houses = {1,2,3,4};
    vector<int> heaters = {1,4};
    cout << findRadius(houses, heaters) << endl;
    return 0;
}