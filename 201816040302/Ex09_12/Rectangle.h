#include<iostream>
#include<array>
#include"Square.h"

class  Rectangle
{
public:
    Rectangle(array(Square,4)a);
    double getLength();
    double getWidth();
    void display();
    bool ChangFang();
    bool SquareXing();
private:
    Square a,b,c,d;
    bool ChangFang();
    bool SquareXing();
    bool check(Square);
};
