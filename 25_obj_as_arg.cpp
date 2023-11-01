#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int x, y;

public:
    void setData()
    {
        cout << "Enter x and y: ";
        cin >> x >> y;
    }
    void display()
    {
        cout << "Number is " << x << "+"
             << "i" << y << endl;
    }
    void addComplex(Complex o1, Complex o2)
    {
        x = o1.x + o2.x;
        y = o1.y + o2.y;
    }
};
int main()
{
    Complex o1, o2, o3;

    o1.setData();
    o1.display();
    o2.setData();
    o2.display();
    o3.addComplex(o1, o2);
    o3.display();

    return 0;
}