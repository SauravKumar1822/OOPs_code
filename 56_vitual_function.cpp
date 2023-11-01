#include <bits/stdc++.h>
using namespace std;

class Base{
public:
    int varBase = 1;
    virtual void display(){
        cout << "Base class Base var " << varBase << endl;
    }
};

class Derived : public Base{
public:
    int varDerived = 2;
    void display(){
        cout << "Derived class Derived var " << varDerived << endl;
        cout << "Derived class Base var " << varBase << endl;
    }
};

int main(){
    // Base *baseptr;
    // Base baseobj;
    // Derived derivedobj;
    // baseptr = &derivedobj;
    // baseptr->display();
    Base b;
    b.display();
    return 0;
}