#include <bits/stdc++.h>
using namespace std;

class Base{
public:
    int varBase;
    void display(){
        cout << "Base class Base var " << varBase << endl;
    }
};

class Derived : public Base{
public:
    int varDerived;
    void display(){
        cout << "Derived class Derived var " << varDerived << endl;
        cout << "Derived class Base var " << varBase << endl;
    }
};

int main(){
    Base *baseptr;
    Base objbase;
    Derived objderived;

    // binding base pointer with derived class
    baseptr = &objderived;
    baseptr->varBase = 40;
    // baseptr->varDerived = 40; // illegal because pointer is of base class
    baseptr->display();

    // binding derived pointer with derived class
    Derived *derivedptr;
    derivedptr = &objderived;
    derivedptr->varDerived = 94;
    derivedptr->varBase = 34;
    derivedptr->display();

    // binding derived pointer with base class
    // derivedptr=&objbase; // this cant be done

    return 0;
}