#include <bits/stdc++.h>
using namespace std;
class Complex
{
    int x, y;

public:
    friend Complex addComplex(Complex o1, Complex o2);
    void setData(int _x, int _y)
    {
        x = _x;
        y = _y;
    }
    void display()
    {
        cout << "Number is " << x << "+"
             << "i" << y << endl;
    }
};

Complex addComplex(Complex o1, Complex o2)
{
    Complex o3;
    o3.setData(o1.x + o2.x, o1.y + o2.y);
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setData(2, 3);
    c1.display();
    c2.setData(3, 4);
    c2.display();
    sum = addComplex(c1, c2);
    sum.display();
    return 0;
}


// properties of friend function :
/* Properties of friend functions
1. Not in the scope of class
2. since it is not in the scope of the class, it cannot be called from the object of that class. c1.sumComplex() == Invalid
3. Can be invoked without the help of any object
4. Usually contans the objects as arguments
5. Can be declared inside public or private section of the class
6. It cannot access the members directly by their names and need object_name.member_name to access any member.
*/