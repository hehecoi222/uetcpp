#include <bits/stdc++.h>
using namespace std;

bool canPlaceFlowers (int flowerbed[], int n, int k) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (flowerbed[i] == 0) {
            if (i == 0 || flowerbed[i - 1] == 0) {
                if (i == n - 1 || flowerbed[i + 1] == 0) {
                    count++;
                }
            }
        }
    }
    return count >= k; 
}

bool isUgly(int n) {
    if (n == 0) return false;
    while (n % 2 == 0) n /= 2;
    while (n % 3 == 0) n /= 3;
    while (n % 5 == 0) n /= 5;
    return n == 1; 
}

bool judgeSquareSum (int number) {
    for (int i = 0; i * i <= number; i++) {
        int j = sqrt(number - i * i);
        if (i * i + j * j == number) return true;
    }
    return false;
}