#include <bits/stdc++.h>
using namespace std;
class Base
{
protected: // private variable which can be inherited;
    int a;

private:
    int b;
};
// for protected member:
//                 public               private                   protected  (derivation)
// 1. private      not inherited        not inherited             not inherited
// 2. protected    protected            private                   protected
// 3. public       public               private                   protected
class Derived : Base
{
};
int main()
{

    return 0;
}