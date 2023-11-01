// you can call another function from the function which is using private thing
#include <bits/stdc++.h>
using namespace std;
class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void display(void)
    {
        cout << s << endl;
    }
    void compliment(void)
    {
        chk_bin();
        for (auto &it : s)
        {
            if (it == '1')
                it = '0';
            else
                it = '1';
        }
    }
};
void binary::read(void)
{
    cout << "Enter the string: ";
    cin >> s;
}
void binary::chk_bin(void)
{
    for (auto it : s)
    {
        if (it != '0' && it != '1')
        {
            cout << "Incorrect" << endl;
            exit(0);
        }
    }
}
int main()
{
    binary b;
    b.read();
    // b.chk_bin(); nested inside the compliment;
    b.compliment();
    b.display();
    return 0;
}

// OOPs - Classes and objects

// C++ --> initially called --> C with classes by stroustroup
// class --> extension of structures (in C)
// structures had limitations
//      - members are public
//      - No methods
// classes --> structures + more
// classes --> can have methods and properties
// classes --> can make few members as private & few as public
// structures in C++ are typedefed
// you can declare objects along with the class declarion like this:
/* class Employee{
            // Class definition
        } harry, rohan, lovish; */
// harry.salary = 8 makes no sense if salary is private

// Nesting of member functions
