#include <bits/stdc++.h>
using namespace std;

class A
{
    int a;

public:
    A &setData(int a)
    {
        // a = a; garbage value
        this->a = a;
        return *this;
    }
    void getData()
    {
        cout << "value of a is " << a << endl;
    }
};

int main()
{
    // this is a keyword which is a pointer which points to the object which invoked the member function
    A a;
    a.setData(4).getData();
    a.getData();
    return 0;
}