#include <bits/stdc++.h>
using namespace std;
int main()
{
    // pointers
    int a = 4;
    int *ptr = &a;
     //char c='a';
     //char *ptr1=&c;
    cout << ptr << "->" << *ptr << endl;
    cout<< sizeof(ptr) <<"?" <<endl;

    // new operator/keyword
    int *p = new int(40);
    cout << p << "->" << *p << endl;

    int *arr = new int[3];
    arr[0] = 1;
    // arr[1] = 2;
    *(arr + 1) = 2;
    arr[2] = 3;
    cout << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl;

    // delete operator/keyword
    delete [] arr;
    cout <<"After delete arr: \n"
         << arr[0] << endl
         << arr[1] << endl
         << arr[2] << endl;

    // delete[] arr;
    // cout << arr[0] << endl
    //      << arr[1] << endl
    //      << arr[2] << endl;

    return 0;
}