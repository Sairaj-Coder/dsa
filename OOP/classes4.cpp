//static memeber is 3 and this is 4th lecture
//basically we know class or struct are user defined data types predefined are int

/*
strut= is user defined data type that groups data and function together and member are public by default
class=a user defined data type but memeber are private

*/
//in case we have lots of variable for class then we cannot declare everyvariable we will make array 
//basically like int arr[];
#include<bits/stdc++.h>
using namespace std;
class employe{
    string name;
    int salary=12;
    public:
    void getdata(){
        cout<<"Enter name:";
        cin>>name;
        cout<<"Enter salary:";
        cin>>salary;
    }
    void display_data(){
        cout<<"The name is:"<<name<<endl;
        cout<<"Salary is:"<<salary<<endl;
    }
    
};
int main(){
    employe data[3];//now employe is user defined data type it as stored value in form of
    //array and used declared proporties to store it
    for (int i = 0; i < 3; i++)
    {
        data[i].getdata();
    }
    for (int i = 0; i < 3; i++)
    {
        data[i].display_data();
    }
    data[0].display_data();//like this also we can accessed it
    //as we know data[0]=indicating toward 0 index element of employee user defined data type
    //and display_data();= showing data of that employee
    
    

    return 0;
}