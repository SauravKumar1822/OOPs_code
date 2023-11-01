// operator overloading example
#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, img;

public:
    void setData(int a, int b){
        real = a;
        img = b;
    }

    void getData(){
        cout << real << " + i" << img << endl;
    }

    Complex operator+(Complex c){
        Complex temp;
        temp.real = real + c.real; // we havn't used c1.real becoz member function 
        temp.img = img + c.img;    //is called by object itself so c1 is implicitly passed
        return temp;
    }
};

// struct cplx{
//     int real, img;
// };

// cplx operator+(cplx c1, cplx c2){
//     cplx temp;
//     temp.real = c1.real + c2.real;
//     temp.img = c1.img + c2.img;
//     return temp;
// }

int main()
{
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c2.setData(3, 4);
    c3 = c1 + c2;
    c3.getData();
    
    // struct cplx c4, c5, c6;
    // c6=c4+c5;
    // cout<<c6.real<<" + i"<<c6.img<<endl;
    
    return 0;
}