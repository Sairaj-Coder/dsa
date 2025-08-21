#include<bits/stdc++.h>
//recursion=when function call it self until a specific condition is satified the following phenomena is called recursion
using namespace std;
int vari=0;//here we have declare global varible 
void recursion(){
    if (vari==10)
    {   return ;
    }
    cout<<vari<<endl;
    vari++;
    recursion();//it will call function until condition is not satisfied    
}
int recursion2(){
    if (vari==5)
    {   return vari;
    }
    cout<<vari<<" This has return value"<<endl;
    vari++;
    recursion2();//it will call function until condition is not satisfied 

}
int main(){
    //recursion();//it is void function so it is not suppose to return value
    cout<<recursion2();//it has printed 5 because last value was 5 in variable
    return 0;
}