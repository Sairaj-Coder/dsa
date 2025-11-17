#include<bits/stdc++.h>
using namespace std;
class static_data{
    string name;
    static int id;//now here we cannot declare value
    int a=0;
    public:
    void getdata();
    //creting static function
    static void getcount(void){
        cout<<"The value of id is:"<<id<<endl;
        //we can only accessed static data into static function
        //cout<<a;--->this will throw error
    }
    

};
void static_data::getdata(){
    cout<<"Enter your name:";
    cin>>name;
    cout<<"Your id is:"<<id<<endl;
    id++;
}

int static_data::id;//by default value is 0 and this can be accessed by only this class
//int static_data::id=1000;-->here only we can declare it
//now value will stay updated for different class uses
int main(){
    //now we can accessed this without declaring any class because it is static
    static_data::getcount();//now we have accessed it directly
    static_data sairaj,rohan,vivek;
    sairaj.getdata();
    rohan.getdata();
    vivek.getdata();
    //now this 3 variable can accessed static data and shared
    
    return 0;
}