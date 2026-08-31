#include<bits/stdc++.h>
using namespace std;
class para{
    public:
    int a;
    int b;
    para(){
        a=0;
        b=0;
    }
    para(int x){
        a=x;
        b=0;

    }
    para(int x,int y){
        a=x;
        b=y;

    }
    void add(){
        cout<<a+b<<endl;
    }
};
int main(){
    para sairaj(6);
    
    sairaj.add();
    sairaj.a=5;
    
    sairaj.add();
    para sai=para(15,15);

    sai.add();
    
    
    return 0;
}