// now we are going to learn that how we can access the value of same class
#include <bits/stdc++.h>
using namespace std;
class accessing_same
{
    int a, b=0;
    int sum=0;

public:
    void set_data(int a1, int b1)
    {
        a = a1;
        b = b1;
        cout<<"The a:"<<a<<endl;
        cout<<"The b:"<<b<<endl;
    }
    void sum1(accessing_same a2, accessing_same b2)
    { // now here i have taken a and b from same class
        
        cout<<"The first:"<<a2.a<<endl;
        cout<<"The second:"<<a2.b<<endl;
        cout<<"The Third:"<<b2.a<<endl;
        cout<<"The fourth:"<<b2.b<<endl;
        cout<<"This is inbuilt function of accessing_same";
        
    }//basically this is inbuilt function of user defined data 
    // we need to understand more about this
    void print(){
        cout<<a+b<<endl;
    }
};
int main(){
    accessing_same x,y,z;
    x.set_data(1,2);//same this function did
    x.print();//now this has printed sum as we called it

    y.set_data(3,4);
    y.print();

    //now if we try to use function sum1 directly we will not be able to use but variables of acceessing same
    //will be
    z.sum1(x,y);




    return 0;
}