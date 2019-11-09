#include "Rectangle.h"
#include <iostream>
#include <array>
#include"Square.h"
using namespace std;

int main()
{
    array<Point, 4> a;
    int x, y;
    for (int i = 0; i < 4; i++)
    {
        cin >> x >> y;#include "Rectangle.h"
        a[i] = Point(x, y);
    }
    Rectangle wst(a);
    cout << "ChangFang: " << (wst.ChangFang() ? "true" : "false") << endl;
    cout << "ZhengFang: " << (wst.SquareXing() ? "true" : "false") << endl;
    wst.display();
    cout << "Length: " << wst.getLength() << endl;
    cout << "Width: " << wst.getWidth() << endl;
}


