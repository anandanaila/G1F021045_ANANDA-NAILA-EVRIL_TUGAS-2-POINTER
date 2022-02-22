#include <iostream>
using namespace std;

int main()
{
    int x, y, *p1, *p2;

    x = 5;
    y = 10;

    p1 = &x;
    *p1 = 7;
    cout << "P1 = " << p1 << "\nP2 = " << p2 << "\nX = " << x << "\nY = " << y << "\n\n";

    p2 = &y;
    x = *p2;
    cout << "P1 = " << p1 << "\nP2 = " << p2 << "\nX = " << x << "\nY = " << y << "\n\n";

    x = y;
    p1 = &y;
    p2 = &x;
    cout << "P1 = " << p1 << "\nP2 = " << p2 << "\nX = " << x << "\nY = " << y << "\n\n";

    p2 = &x;
    p1 = p2;
    *p2 = 6;
    cout << "P1 = " << p1 << "\nP2 = " << p2 << "\nX = " << x << "\nY = " << y << "\n\n";

    return 0;
}
