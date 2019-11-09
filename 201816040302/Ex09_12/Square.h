#include<iostream>
class Square
{
public:
    Square();
    Square(double,double);
    void setX();
    void setY();
    double getX();
    double getY();
private:
    double x;
    double y;
};
