#include<bits/stdc++.h>
using namespace std;
//submission of n natural number
int functional_recursion(int num){
    if (num==1)
    {
        return 1; 
    }
    return (num+functional_recursion(num-1));

}
/*Functional recursion is a programming technique where a function calls itself to 
solve a problem by breaking it down into smaller subproblems of the same type.
*Functional recursion refers to:
A function calling itself within its own definition, typically with modified arguments,
c  until a base condition is met that stops further recursive calls.*/

//factoral of n
int factorial(int num){
    if (num==0){ return 1;}
    return num*factorial(num-1);

}


int main(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    cout<<functional_recursion(num)<<endl;
    cout<<factorial(num);
    return 0;
}