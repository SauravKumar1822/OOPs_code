#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int x, y;

public:
    Complex(void)
    {
        x = 0;
        y = 0;
    }
    Complex(bool b, int val)
    {
        if (b)
        {
            x = val;
            y = 0;
        }
        else
        {
            y = val;
            x = 0;
        }
    }
    Complex(int a, int b)
    {
        x = a;
        y = b;
    }
    void display(void)
    {
        cout << x << " + i" << y << endl;
    }
};
int main()
{
    Complex a, b(false, 3), c(true, 4), d(1, 3);
    a.display();
    b.display();
    c.display();
    d.display();

    return 0;
}