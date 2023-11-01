#include <bits/stdc++.h>
using namespace std;
class Number
{
    int a;

public:
    Number() { a = 0; }
    Number(int num)
    {
        a = num;
    }
    void display()
    {
        cout << "The num is " << a << endl;
    }
    // when copy constructor is not defined then it is defined implictly and throws NO error
    Number(Number &obj)
    {
        cout << "Copy constructor called" << endl;
        a = obj.a;
    }
};
int main()
{
    Number x, y, z(45);
    x.display();
    y.display();
    z.display();
    Number z1(z); // called;
    z1.display();

    Number z2;
    z2 = z;
    z2.display(); // not called;

    Number z3 = z;
    z3.display();
    return 0;
}