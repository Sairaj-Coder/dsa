#include<bits/stdc++.h>
using namespace std;
//friendly functiion are those function which are made from classes by their name to return them
class complexx{
    int a,b;
    public:
    //below line mean non member function is allowed
    //to work with private data

    friend complexx addd(complexx w,complexx m);//make it friend function so no other should be able to access
    void setdata(int x,int y){
        a=x;
        b=y;

    }
    void printdata(){
        cout<<"the complex number sum is:"<<a<<" + "<<b<<"i "<<endl;
    }
};
// now we are creating freindly function which will take only complex class input and can
//access private memeber but for that it should be declared in main body
complexx addd (complexx w,complexx m){
    complexx c3;
    c3.setdata((w.a+m.a),(w.b+m.b));
    return c3;
    //bascially this is not member that we directly cally it in main body
    //it just has permission to access private member

}


int main(){
    complexx a1,b1, summ;
    a1.setdata(1,2);
    b1.setdata(5,8);

    a1.printdata();
    b1.printdata();
    summ=addd(a1,b1);
    summ.printdata();
    //summ.addd()-->this is not possible
    return 0;
};
/* friend function
1)not in scope of class i.e it sa
2)since it is not in scope so it cannot be called by obejcet
of that class direclty c1.addd() is invalid
3)can be invoked without the help of any object
4)usually contains the object as arguments
5)can be declared inside public or private doesn't matter
6)it cannot access the members directly by their names and need
object_name.member_name to access any memebr
  



*/