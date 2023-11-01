// done
#include <bits/stdc++.h>
using namespace std;
int add(int a, int b)
{
    cout << "arg 2" << endl;
    return a + b;
}
// int add(int c, int d)
// {
//     cout << " mult arg 2" << endl;
//     return c * d;
// }
int add(int a, int b, int c)
{
    cout << "arg 3" << endl;
    return a + b + c;
}
int main()
{
    cout << add(3, 4) << endl;
    cout << add(3, 4, 4) << endl;
    // cout << add(3, 4, 4, 5) << endl;     // compilation error
    return 0;
}