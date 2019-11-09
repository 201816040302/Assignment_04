#include <iostream>
using namespace std;

#include "Rectangle.h"

int main()
{
    Rectangle a(7,10);
    cout<<a.getLength()<<endl;
    cout<<a.getWidth()<<endl;
    a.displayMessage();
    Rectangle b(25,25);
    cout<<b.getLength()<<endl;
    cout<<b.getWidth()<<endl;
    b.displayMessage();
} // end main
