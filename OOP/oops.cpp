#include <bits/stdc++.h>
using namespace std;
class detail
{
    string name;
    int id;
    long long num;

public:
    long long phone_number(long long num1)
    {
        num = num1;

        return num;
    }
    void number();

    void nameofemployee()
    {
        cout << "Enter your name:";
        cin >> name;
        cout << "Enter your id:";
        cin >> id;
    }
    void display();
};
void detail::display()
{
    cout << name << endl;
    cout << id << endl;
}
void detail::number()
{
    cout << num << endl;
}

int main()
{
    long long phone;
    detail sairaj;
    sairaj.nameofemployee();

    cout << "store your number:";
    cin >> phone;
    sairaj.phone_number(phone);
    sairaj.number();
    sairaj.display();

    return 0;
}