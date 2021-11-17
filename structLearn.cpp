#include <iostream>
using namespace std;

struct fraction{
    int numerator, denominator;
    fraction (int _numerator, int _denominator){
        // them code cua ban o day
        numerator = _numerator;
        denominator = _denominator;
    }
    fraction(){
        // them code cua ban o day
        numerator = 0;
        denominator = 1;
    }
    fraction Simpler(){
        // them code cua ban o day
        int a = numerator;
        int b = denominator;
        while (b != 0){
            int temp = a % b;
            a = b;
            b = temp;
        }
        numerator /= a;
        denominator /= a;
        return *this;
    }
};

fraction add(fraction a, fraction b){
    // them code cua ban o day
    fraction c;
    c.numerator = a.numerator * b.denominator + b.numerator * a.denominator;
    c.denominator = a.denominator * b.denominator;
    c.Simpler();
    return c;
} 

int main() {
    // them code cua ban o day
    int a,b;
    cin >> a >> b;
    fraction F1(a,b);
    cin >> a >> b;
    fraction F2(a,b);
    cout << add(F1,F2).numerator << "/" << add(F1,F2).denominator << endl;
}
