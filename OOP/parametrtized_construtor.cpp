//bascially a constrtuor where arguments are passed
#include<iostream>
using namespace std;
class para_con{
    int a,b;
    public:
    para_con(int a1,int b1){
        a=a1;
        b=b1;

    }
    //multiple construtor and setting value defaulty zero in case of no input
    para_con(int a1){
        a=a1;
        b=0;
    }
    //
    /*
    para_con(int a1=0,int b1=0){
        a=a1;
        b=b1;
    }
    *///-->we can creatw like this
    void add(){
        cout<<"The value of:"<<(a+b)<<endl;
    }

};
int main(){
    //first way to 
    para_con x(4,5);
    x.add();
    //second way
    para_con b= para_con(7,5);
    b.add();
    //only passing one value
    para_con c=(5);
    c.add();


    return 0;
}
