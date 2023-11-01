#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;

public:
    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
    void getData()
    {
        cout << real << " + i" << img << endl;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    // (*ptr).setData(2, 3);
    // (*ptr).getData();

    // Complex *ptr = new Complex();
    // (*ptr).setData(2, 3);
    // (*ptr).getData();

    // Complex *ptr = new Complex;
    // ptr->setData(2, 3);
    // ptr->getData();

    Complex *ptr = new Complex[4];
    ptr->setData(1, 4);
    ptr->getData();
    ptr++;
    ptr->setData(2, 3);
    ptr->getData();
    return 0;
}