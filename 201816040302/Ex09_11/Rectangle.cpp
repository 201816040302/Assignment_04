#include <iostream>
using namespace std;


#include "Rectangle.h"

Rectangle::Rectangle( double length, double width)
{
   setLength(length);
   setWidth(width);
}

void Rectangle::setLength( double length )
{
    if (length >= 20 || length <= 0)
    {
        cout << "Length must 在0到20之间" << endl;
        return;
    }
    this->length = length;
}

double  Rectangle::getLength()
{
   return length;
}


void Rectangle::setWidth( double width)
{
    if (width >= 20 || width <= 0)
    {
        cout << "Width must 在0到20之间" << endl;
        return;
    }
    this->width = width;
}

double Rectangle::getWidth()
{
    return width;
}

void Rectangle::displayMessage()
{
   cout<<"Perimeter is:"<<(getLength()+getWidth())*2<<endl;
   cout<<"area is:"<<getLength()*getWidth()<<endl;
}



