#include<iostream>
#include<array>
#include"Square.h"
using namespace std;

Square::Square(double x,double y)
{
    setX(x);
    setY(y);
}
void Square::setX(double a)
{
    x=a;
}
void Square::setY(double b)
{
    y=b;
}
double Square::getX()
{
    return x;
}
void Square::setY(double b)
{
    y=b;
}
double Square::getX()
{
    return x;
}
double Square::getY()
{
    return y;
}
