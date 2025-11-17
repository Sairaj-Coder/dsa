#include <bits/stdc++.h>
using namespace std;
class shop
{
    int itemprice[50];
    int itemid[50];
    int counter = 0;

public:
    void shopsitem(void);
    void display_items(void);
};
void shop::shopsitem(void)
{
    cout << "Enter itemp id :";
    cin >> itemid[counter];
    cout << "Enter price :";
    cin >> itemprice[counter];
    counter += 1;
};
void shop::display_items(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item id is:" << itemid[i] << endl;
        cout << "The item price is:" << itemprice[i] << endl;
    }
}

int main()
{
    shop sairaj;
    sairaj.shopsitem();
    sairaj.shopsitem();
    sairaj.shopsitem();
    sairaj.display_items();

    return 0;
}