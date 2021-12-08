#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int findRadius(vector<int> houses, vector<int> heaters) {
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int res = 0;
    int i = 0, j = 0;
    while (i < houses.size()) {
        while (j < heaters.size() && heaters[j] < houses[i]) ++j;
        if (j == heaters.size()) break;
        res = max(res, min(houses[i] - heaters[j - 1], heaters[j] - houses[i]));
        ++i;
    }
    return res;
}

int Alternative(vector<int> houses, vector<int> heaters) {
    sort(houses.begin(), houses.end());
    sort(heaters.begin(), heaters.end());
    int res = 0,j=0,l=0;
    for (int i=0; i<houses.size();i++){
        for (;j<heaters.size() && heaters[j]<=houses[i];j++);
        if (j>=heaters.size()) {
            j--;
            res = max(res,min(houses[i]-heaters[j-1],abs(heaters[j]-houses[i])));
            j++;
        } else res = max(res,min(houses[i]-heaters[j-1],abs(heaters[j]-houses[i])));
        if (j==heaters.size()) {
            if (i==houses.size()-1) return res;
            if (i<houses.size()) return max(res,houses.back()-heaters[j-1]);
        }
    }
    return res;
}

int main() {
    vector<int> houses = {1,5};
    vector<int> heaters = {2,1};
    cout << Alternative(houses, heaters) << endl;
    return 0;
}