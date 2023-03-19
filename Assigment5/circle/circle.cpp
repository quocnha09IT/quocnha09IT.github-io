#include "circel.h"

circle::circle()
{
    rad = 1.0;
}
circle::circle(double radi){
    rad = radi;
}

void circle::setRad(double r)
{
    rad = r;
}
double circle::getRad()
{
    return rad;
}
double circle::getArea()
{
    return pi * rad * rad;
}
double circle::getDiamater()
{
    return rad *2;
}
double circle::getCircum()
{
    return 2 * pi * rad;
}