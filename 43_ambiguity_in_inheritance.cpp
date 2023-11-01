#include <bits/stdc++.h>
using namespace std;

class Base1{
protected:
    int base1int;

public:
    void greet(){
        cout << "how are u?" << endl;
    }
};

class Base2{
protected:
    int base2int;

public:
    void greet(){
        cout << "kaise ho?" << endl;
    }
};

class Derived : public Base1, public Base2{
public:
    void show(){
        cout << "The values are " << base1int << " " << base2int << endl;
    }
    // ambiguty1 resolved
    // void greet(){
    //     Base1::greet();
    // }

    // ambiguity2
    // more priority to its own function
    void greet(){
        cout << "Hello beautifull" << endl;
    }
};

int main(){
    Derived harry;
    harry.greet();
    return 0;
}