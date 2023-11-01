#include <bits/stdc++.h>
using namespace std;

/*  Destructor is a special member functions used to clean-up resources(memory,
    file handels or network connections) that are held by an object, when it goes 
    out of scope or is explicitly deleted.
    Destructor never takes an argumentnor does it return any value.    
*/

class Num
{
    static int count; 

public:
    Num()
    {
        count++;
        cout << "Constructor invoked " << count << endl;
    }
    ~Num()
    {
        cout << "Destructor invoked " << count << endl;
        count--;
    }
};
int Num::count = 0;
int main()
{
    Num n1;
    // cout << Num::count << endl;
    cout << "start scope" << endl;
    {
        Num n2, n3;
    }
    cout << "end scope" << endl;

    return 0;
}