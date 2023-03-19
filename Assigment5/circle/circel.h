#include <iostream>
#include <cstdlib>
using namespace std;
class circle{
    private:
    double rad;
     const double pi = 3.14159;
    public:
    circle();
    circle(double rad);

    void setRad(double r);
    double getRad();
    double getArea();
    double getDiamater();
    double getCircum();
};