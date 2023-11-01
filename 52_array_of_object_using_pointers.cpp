#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << id << " " << price << endl;
    }
};

int main()
{
    int sz = 3;
    Shop *ptr = new Shop[sz];
    Shop *tmp = ptr;
    for (int i = 0; i < sz; i++)
    {
        tmp->setData(i, 40);
        tmp++;
    }
    tmp = ptr;
    for (int i = 0; i < sz; i++)
    {
        tmp->getData();
        tmp++;
    }

    return 0;
}