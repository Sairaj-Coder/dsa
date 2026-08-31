#include <bits/stdc++.h>
using namespace std;
// telling the compiler that this class exist
// forward declaration
class complexx;

class cal
{
public:
    int add(complexx, complexx); // here we have defined that function exist find it we cannot say that o1 o2 exist
    // because we have not declared it above
};

class complexx
{
    float a, b;
    friend int cal ::add(complexx, complexx); // this is way to make function of another class friendly

public:
    void set_data(float a1, int b1)
    {
        a = a1;
        b = b1;
    }
    void print()
    {
        cout << "The complex number is:" << a << "+ " << b << "i" << endl;
    }
};

int cal ::add(complexx o1, complexx o2)
{
    return (o1.a + o2.a);
}

int main()
{
    complexx o1, o2;
    o1.set_data(1.1, 4);
    o2.set_data(5.1, 7);
    cal calu;
    int result = calu.add(o1, o2);
    cout << result;

    return 0;
}