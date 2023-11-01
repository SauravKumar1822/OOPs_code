#include <bits/stdc++.h>
using namespace std;

/*
intialization list in cnstrctr
constructor(arguement-list): initialization-section{
    // Body
}

class Test{
    int a;
    int b;
    public:
        Test(int i, int j): a(i), b(j) // a valid syntax
        {
            // Body
        }
};
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j) // correct
    // Test(int i, int j) : a(i), b(a + j) // correct
    Test(int i, int j) : b(j), a(i + b) // create problem becoz a is initialized first
    {
        cout << a << " " << b << endl;
    }
};
int main()
{
    Test harry(1, 2);
    return 0;
}