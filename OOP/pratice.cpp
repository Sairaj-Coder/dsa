#include <bits/stdc++.h>
using namespace std;
class student
{
    // here we are learning about array in c++ with help of oop
private:
    string arr_name[10]={"0"};
    int roll_no[10]={0};
    int cntr = 0;

public:
    void present();
    void check_rollno_present();
};
int main()
{
    cout << "Welcome to presentii house to school:" << endl;
    student strawberry,vnias;
    strawberry.present();
    strawberry.check_rollno_present();
    
    vnias.present();
    vnias.check_rollno_present();
    //here in both cases value of cnt starts from 0
    // now here count cannot be passed from one to another it cannot be updated in both case
    //strawberry and vnias count will start from 0 increment until we want
    //in static data member it stay updated

    return 0;
}
void student::check_rollno_present()
{
   for (int i = 0; i < cntr; i++)
   {
        cout<<arr_name[i]<<"="<<roll_no[i]<<endl;
        
   }
   cout<<"The value of cntr is:"<<cntr<<endl;
   
}
void student::present()
{
    while (cntr < 10)
    {
        cout << "Enter name:";
        cin >> arr_name[cntr];
        if (arr_name[cntr]=="exit")
        {
            break;
        }
        
        cout << "Enter roll no:";
        cin >> roll_no[cntr];
        cntr += 1;
      


        
    }
}