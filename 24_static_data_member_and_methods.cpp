#include <bits/stdc++.h>
using namespace std;
class Employee
{
    int id;
    static int count; // default 0

public:
    static void getCount()
    {
        // cout<<id; cant access non static data member
        cout << "count is " << count << endl;
    }
    void setData()
    {
        cout << "Enter the id: ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "Id is " << id << endl;
    }
};
int Employee::count = 90;
int main()
{
    Employee emp1, emp2, emp3;
    emp1.setData();
    emp1.getData();
    Employee::getCount();
    emp2.setData();
    emp2.getData();
    Employee::getCount();
    emp3.setData();
    emp3.getData();
    Employee::getCount();
    return 0;
}