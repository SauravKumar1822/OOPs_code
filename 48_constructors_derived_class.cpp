#include <bits/stdc++.h>
using namespace std;
/*
case1
class B: public A{
    order==A->B
};

case 2
class A: public B, public C{
    order==B->C->A
};

case 3
class A: public B, virtual public C{
    order==C->B->A
};
*/
class Base1{
    int data1;

public:
    Base1(int i){
        data1 = i;
        cout << "Base1 Class cnstrctr" << endl;
        cout << data1 << endl;
    }
};

class Base2{
    int data2;

public:
    Base2(int i){
        data2 = i;
        cout << "Base2 Class cnstrctr" << endl;
        cout << data2 << endl;
    }
};

class Derived : public Base2, public Base1{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b){ // order dosent matter
        derived1 = c;
        derived2 = d;
        cout << "Derived class cnstrctr" << endl;
        cout << derived1 << " " << derived2 << endl;
    }
};

int main(){
    Derived harry(1, 2, 3, 4);
    return 0;
}