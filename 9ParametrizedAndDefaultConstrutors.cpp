#include <iostream>
#include<conio.h>
using namespace std;

class Point
{                                                // parametrized mtlb constructors ko arguments dena//
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }

    void Displaypoint()
    {
        cout << "The Point is (" << x << "," << y << ")" << endl;
    }
};

int main()
{ 
    // Implicit call//    // we can call by thees two types
    
    Point p(4, 6);
    p.Displaypoint();

    // Explicit Call//
    Point q = Point(5, 6);
    q.Displaypoint();

    return 0;
}