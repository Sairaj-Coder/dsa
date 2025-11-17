#include<bits/stdc++.h>
using namespace std;
class Employe

{   //by default if we didn't write public all the member will became private 
    //if we want to write all program which is private then
    // just dont write public and no need of private keyword
    int c;
    private:
        int a,b;
        string x=" this is prrivate we cannot access it directly but function can";

    
    public:
        int d,e;
        void setdata(int a1,int b1,int c1);//declaring function but as we know we can write it outside
        void getdata(){
            cout<<"The value of a is "<<a<<endl;
            cout<<"The value of b is "<<b<<endl;
            cout<<"The value of c is "<<c<<endl;
            cout<<"The value of d is "<<d<<endl;
            cout<<"The value of e is "<<e<<endl;
            cout<<x<<endl;//here function has accessed it, valid for array other also
            // we will call goodnight directly here
            goodnight();//here we nested
        }
        void goodnight();//now i an in wish that i want to run this function without calling
        
        
};

void Employe:: setdata(int a1,int b1,int c1)
{
    a=a1;
    b=b1;
    c=c1;
}
void Employe :: goodnight(){
    cout<<"bye this was nesting trial"<<endl;
}

int main(){
    Employe sairaj;
    //sairaj.a=25; here a is private we can only insert value with the help of internal function ex
    //cout<<sairaj.a<<endl; it is private so we cannot access it directly
    sairaj.setdata(1,2,3);//inserting data this is the way
    //to get print out we are using internal function
    sairaj.getdata();
    //right now we are getting garbage value for d and e as it is not set
    //we can set it directly as it is public
    sairaj.e=75;
    sairaj.d=89;
    //now we can print data directly also
    cout<<sairaj.d<<endl;
    cout<<sairaj.e<<endl;
    //or we can use internal function also
    sairaj.getdata();
    //sairaj.x;-->we cannot access it as it private but function can do it
    //sairaj.goodnight();-->i want this function to be run automatically then i will use function nesting
    return 0;
}