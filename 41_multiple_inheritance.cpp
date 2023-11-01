#include <bits/stdc++.h>
using namespace std;

class Base1{
protected:
    int base1int;
public:
    void setBase1int(int a){
        base1int = a;
    }
};

class Base2{
protected:
    int base2int;
public:
    void setBase2int(int a){
        base2int = a;
    }
};

class Derived : public Base1, public Base2{
public:
    void show(){
        cout << "The values are " << base1int << " " << base2int << endl;
    }
};

int main(){
    Derived harry;
    harry.setBase1int(5);
    harry.setBase2int(25);
    harry.show();
    return 0;
}