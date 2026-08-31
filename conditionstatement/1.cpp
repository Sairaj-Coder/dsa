#include <bits/stdc++.h>
using namespace std;
int main()
{
     // if else
     /*Print the largest of 2 number


        int larg1,larg2;
        cout<<"Enter largest number 1"<<endl;
        cin>>larg1;
        cout<<"Enter largest number 2"<<endl;
        cin>>larg2;
        if(larg1>larg2){
            cout<<"First is largest"<<endl;
        }
        else{
            cout<<"second is largest"<<endl;
        }
     */
     /*Print if a number is odd or even

        int num;
        cout<<"Enter number"<<endl;
        cin>>num;
        if(num%2==0){
            cout<<"Enter number is even"<<endl;
        }
        else{
            cout<<"odd"<<endl;
        }
        */
      /*Create an income tax calculator */
      /*
        float salary;
        cout<<"Enter income"<<endl;
        cin>>salary;

        if(salary<5){
            cout<<0<<"=Tax1"<<endl;

        }
        else if(salary>=5 && salary<=10){
            cout<<(salary*(20.0/100))<<"=Tax2"<<endl;
        }
        else {
            cout<<((30.0/100)*salary)<<"=tax3"<<endl;
        }





    */
    /*print the largest number*/
    /*
    int num1, num2, num3;
    cin >> num1 >> num2 >> num3;
    if (num1 > num2 && num1 > num3)
    {
        cout << "greatest=>"<< num1<<endl ;
    }
    else if (num2 > num3 && num2 > num1)
    {
        cout << "greatest=>"<<num2<<endl ;
    }
    else if (num3 > num2 && num3 > num1)
    {
        cout << "greatest=>"<< num3<<endl;
    }
        */
    /*
    int age;
    cout<<"Enter age is:"<<endl;
    cin>>age;
    string adult = (age>18)? "ready to club":"Still child";
    cout<<adult<<endl;
    */
   //build a calculator using swicth 4 basic arithematic operation (+-/*) 
   int num1 ,num2;
   cout<<"Enter num1"<<endl;
   cin>>num1;
   cout<<"Enter num2"<<endl;
   cin>>num2;
   char opt;
   cout<<"enter operator +-*/"<<endl;
   cin>>opt;
   switch(opt){
    case '+':cout<<num1+num2<<endl;
    break;
    case '*':cout<<num1*num2<<endl;
    break;
    case '/':cout<<num1/num2<<endl;
    break;
    case '%':cout<<num1%num2<<endl;
    break;
    case '-':cout<<num1-num2<<endl;
    break;
    default:cout<<"Invalid output"<<endl;
    

   }
    
    return 0;
}