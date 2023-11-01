#include <bits/stdc++.h>
using namespace std;

// base class
class Employee
{
public:
    int id;
    float salary;
    Employee(int _id)
    {
        id = _id;
        salary = 34.0;
    }
    Employee() {}
};

// derived class
// class {{deroved-class-name}}:{{visiblity-mode(public/private)}} {{base-class-name}} {};
// 1. default visiblity mode is private
// 2. public mode: public members of the base class become public members of the derived class
// 3. private mode: public members of the base class become private members of the derived class
// 4. private members are never be inherit
class Programmer : public Employee
{
public:
    int langCode = 9;
    Programmer(int _id)
    {
        id = _id;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer skillf(1);
    skillf.salary=100;
    cout << skillf.id << " " << skillf.langCode <<" "<< skillf.salary << endl;
    return 0;
}
