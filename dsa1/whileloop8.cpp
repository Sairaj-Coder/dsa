#include<bits/stdc++.h>
using namespace std;
int main(){
    /*
    intilization(int=1)
    while (condition)
    {

    increment,decrement operator here
    }
    */
    //printing a table
    
    int i=1;
    while (i<=10){
    
        cout<<5*i<<endl;
        i+=1;
    }
    
    

    //do while loop=once a condition is executed
    int a=2;
    do{
        cout<<"here once a loop is run " <<a<< " As value is more then condition still it runs"<<endl;
    }while (a<1);
    cout<<a<<endl;//here the value of a is 2 there fore loop stop because it is not statisfying the condition
       
    
    int b=1;
    do{
    
        cout<<"The value of b is "<<b<<endl;
        b+=1;
    }while (b<10);
//note one line we can write without braces   
    


}