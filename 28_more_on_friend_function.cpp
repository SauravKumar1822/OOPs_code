#include <bits/stdc++.h>
using namespace std;
class Y;  //forward declaration
class X
{
    int data;

public:
    void setValue(int val)
    {
        data = val;
    }
    friend void add(X, Y);
};
class Y
{
    int data;

public:
    void setValue(int val)
    {
        data = val;
    }
    friend void add(X, Y);
};

void add(X o1, Y o2)
{
    cout << "Sum is " << o1.data + o2.data << endl;
}
int main()
{
    X a;
    Y b;
    a.setValue(3);
    b.setValue(5);
    add(a, b);

    return 0;
}