#include<iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age"<<endl;
    cin>>age;
    if (age>57)
    {
        cout<<"retirement time"<<endl;   
    }
    else if (age<18)
    {
        cout<<"Not eligible for job"<<endl;
    }
    else if (age>=18)
    {
        if (age>=55 && age<=57)
        {
            cout<<"Retirement Soon"<<endl;
        }
        else 
        {
            cout<<"You are eligible for job";
        }

    }
   
    
    return 0;
    
    

}
