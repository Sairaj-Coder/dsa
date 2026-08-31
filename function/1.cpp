#include<bits/stdc++.h>
using namespace std;

int factorial(int num){
    if(num==0){
        return 1;
    }
    else{
        int fact=1;
        for (int i = 1; i <= num; i++)
        {
            fact=fact*i;
        }
        return fact;
        
    }

} 


int bionomial_coeeficient(int total,int choice){
    return factorial(total)/((factorial(choice))*factorial((total-choice)));
}
/*Write a function to check if a number is a palindrome in C++*/
int palind(int num1){
    int num=num1;
    int reverse=0;
    while (num>0)
    {
        int lastdigit=num%10;
        reverse=(reverse*10)+lastdigit;
        num=num/10;
    }
    if(reverse!=num1){
        cout<<reverse<<endl;
        return false;
    }
    cout<<reverse<<endl;
    return true;
    
}
/*
Write a function which takes 2 numbers as parameters (a & b) and outputs : a^2+b^2+2*ab
*/
int maths(int a , int b){
    int c=(a*a)+(b*b)+2*a*b;
    return c;
}
//Write a function that prints the largest of 3 numbers
void largest(int a,int b, int c){
    if(a>b && a>c){
        cout<<a<<endl;
    }
    else if(b>a && b>c){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }
}
/*
Write a function that accepts a character (ch) as parameters & returns
the character that occurs after ch in the English alphabet
.Eg:input=‘c’,return value=‘d’
enter z returns a;

*/
char character(char a){
    if(a=='z'){
        return 'a';
    }
    return a+1;

}



int main(){
    // int fact=factorial(0);
    //cout<<fact;
    //cout<<bionomial_coeeficient(3,2);
    //cout<<palind(21)<<endl;
    //cout<<maths(2,2)<<endl;
    //largest(14,13,12);
    return 0;
}