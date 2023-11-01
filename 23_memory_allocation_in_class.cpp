#include <bits/stdc++.h>
using namespace std;
class Shop
{
    int itemId[100];
    int itemPrice[100];
    int cnt;

public:
    void initCounter() { cnt = 0; }
    void setPrice()
    {
        cout << "Enter id: ";
        cin >> itemId[cnt];
        cout << "Enter price: ";
        cin >> itemPrice[cnt];
        cnt++;
    }
    void display()
    {
        for (int i = 0; i < cnt; i++)
        {
            cout << "Price of item " << itemId[i] << " =" << itemPrice[i] << endl;
        }
    }
};
int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.display();
    return 0;
}