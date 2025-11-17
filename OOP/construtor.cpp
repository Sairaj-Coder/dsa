// default construtor

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class construtor
{
public:
    int a;
    int b;

    // basically it is used to set value default it has same as class
    construtor(void)
    { // they do not have any return type
        a = 10;
        b = 5;
    }
    void add()
    {
        cout << a + b;
        // return 0;
    }
};
int main()
{
    construtor sairaj;
    sairaj.add();//this solution is beacuse of default construtor
    cout<<endl;
    sairaj.a=10;
    sairaj.b=10;

    sairaj.add();
    return 0;
}