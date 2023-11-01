#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int x, y;

public:
    Complex(int _x, int _y) // cant refer address
    {
        x = _x;
        y = _y;
    }
    void display()
    {
        cout << x << " + i" << y << endl;
    }
};
int main()
{
    Complex c(10, 20);
    c.display();

    return 0;
}