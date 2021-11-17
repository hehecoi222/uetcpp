#include <iostream>
using namespace std;

struct cylinder{
    int radius,high;
    cylinder (int _radius, int _high){
        // them code cua ban o day
        radius = _radius;
        high = _high;
    }
    double getSurfaceArea(){
        // them code cua ban o day
        return 2*3.14*radius*high + 2*3.14*radius*radius;
    }
    double getVolume(){
        // them code cua ban o day
        return 3.14*radius*radius*high;
    }
};

int main() {
    // them code cua ban o day
    int radius,high;
    cin >> radius >> high;
    cylinder c(radius,high);
    cout << c.getSurfaceArea() << " "<< c.getVolume();
}
