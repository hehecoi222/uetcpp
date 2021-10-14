#include <stdio.h>
#include <iostream>
using namespace std;

int main(){
    int n=2;
    double sum=0;
    for (int i=1; i<=n;i++) {
        sum += ((double)n)/((double)n+1);
    }
    printf("%.5f",sum);
}