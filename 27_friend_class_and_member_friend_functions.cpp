#include <bits/stdc++.h>
using namespace std;
class Complex;
class Calculator
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int sumReal(Complex, Complex);
    int sumImag(Complex, Complex);
};
class Complex
{
    int x, y;
    // individually declaring function as friend
    friend int Calculator::sumReal(Complex, Complex);
    friend int Calculator::sumImag(Complex, Complex);

    // to make whole class as friend;
    friend class Calculator;

public:
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
int Calculator::sumReal(Complex a, Complex b)
{
    return a.x + b.x;
}
int Calculator::sumImag(Complex a, Complex b)
{
    return a.y + b.y;
}

int main()
{
    Complex o1, o2;
    o1.setData(2, 3);
    o2.setData(3, 4);
    Calculator cal;
    int resr = cal.sumReal(o1, o2);
    int resi = cal.sumImag(o1, o2);
    cout << resr << " + i" << resi << endl;
    return 0;
}