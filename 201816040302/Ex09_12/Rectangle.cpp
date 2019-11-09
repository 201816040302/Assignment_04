#include "Rectangle.h"
#include <array>
#include <iostream>
using namespace std;
#include"Rectangle.h"
#include"Square.h"

Rectangle::Rectangle(array<Point, 4> a)
{
    for (Point p : a)
        if (!check(p))
        {
            cout << "应在0到20之间" << endl;
            ChangFang= false;
            SquareXing = false;
            return;
        }
    a = a[0], b = a[1], c = a[2], d = a[3];
    ChangFang = ChangFang();
    SquareXing = SquareXing();
}

bool Rectangle::check(Point p)
{
    double x = p.getX();
    double y = p.getY();
    if ((x < 0 || x > 20) || (y < 0 || y > 20))
        return false;
    else
        return true;
}

double Rectangle::getLength()
{
     return max(b.getX() - a.getX(), a.getY() - c.getY());
}

double Rectangle::getWidth()
{  
     return min(b.getX() - a.getX(), a.getY() - c.getY());
}

void Rectangle::display()
{
    cout<<"Perimeter is:"<<(getLength()+getWidth())*2<<endl;
    cout<<"area is:"<<getLength()*getWidth()<<end
}

bool Rectangle::ChangFang()
{
    if ((a.getX() == c.getX()) && (a.getY() == b.getY()) && (d.getX() == b.getX()) && (d.getY() == c.getY()))
        return true;
    else
        return false;
}

bool Rectangle::SquareXing()
{
    if (ChanFang() && getWidth() == getLength())
        return true;
    else
        return false;
}
