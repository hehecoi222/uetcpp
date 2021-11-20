#include <bits/stdc++.h>
using namespace std;

int len(char *s){
    int i = 0;
    while(s[i] != '\0'){
        i++;
    }
    return i;
}

void delete_char(char *s,char c){
    int charLength = len(s);
    int newcharLength = charLength;
    for (int i=0;i<newcharLength;) {
        if (*(s+i) == c) {
            for (int j=i;j<newcharLength-1;j++) {
                *(s+j) = *(s+j+1);
            }
            newcharLength--;
        }
        else {
            i++;
        }
    }
    for (int i= charLength-1;i >= newcharLength-1;i--) {
        *(s+i) = '\0';
    }
}