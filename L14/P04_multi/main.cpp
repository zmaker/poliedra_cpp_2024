#include <iostream>
#include "Rect.h"

using namespace std;

int main()
{
    cout << "Multi file" << endl;

    Rect r1(10,20);
    cout << "area: " << r1.area() << endl;
    r1.prt();

    Rect r2;
    cout << "area: " << r2.area() << endl;
    r2.prt();

    return 0;
}
