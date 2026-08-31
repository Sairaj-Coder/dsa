/*Print apna college 5 times*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*check if a number is prime or n0t*/
    int num;
    cout << "Enter number:";
    cin >> num;
    int count = 0;
    for (int i = 1; i <= (num+1); i++)
    {

        if (count > 2)
        {
            cout << "Number is not prime";
            break;
        }

        else if (num % i == 0)
        {
            count++;
        }
    }
    if (count == 2)
    {
        cout << "Number is prime";
    }

    // WAP to show a numbers enterd by user except multiples of 10
    /*
    int num;
    while (true)
    {

        cout << "Enter number:";
        cin >> num;
        if(num%10==0){
            continue;;
        }
        cout<<num<<" ";
    }
    */
    /*
    int i = 1;
    int num;
    cout << "Enter a number :";
    cin >> num;
    while (i<=num)
    {
        if(i%10==0){
            i++;
            continue;
        }
        cout<<i<<" ";
        i++;
    }
*/
    // WAP where user can keep entering numbers till they enter a multiple of 10
    /*
    int num;
    while (true)
    {

        cout << "Enter number:";
        cin >> num;
        if(num%10==0){
            break;
        }
    }
    cout<<num<<" "<<"multiple of 10"<<endl;
*/
    /*do while loop*/
    /*
    do{
        cout<<"Condition is false still it will run once"<<endl;
    }while(false);


    */

    /*Reverse a given number and print the result*/
    /*
    int num=10829;
    int reverse=0;
    while (num>0)
    {
        int lastdigit=num%10;
        reverse=(reverse*10)+lastdigit;
        num=num/10;
    }
    cout<<reverse<<endl;



    */

    /*print sum of odd digits of a number using while loop*/
    /*
    int num=10829;
    int sum=0;
    while (num>0)
    {

        int lastdigi=(num%10);
        if(lastdigi%2!=0){
            sum=sum+lastdigi;
        }

        num/=10;
    }
    cout<<sum<<endl;
    */

    /*print sum of digit using while loop*/
    /*
    int num=10829;
    int sum=0;
    while (num>0)
    {
        sum=sum+(num%10);
        num/=10;
    }
    cout<<sum<<endl;
    */

    /*print number from n to 1*/
    /*
    int n;
    cout<<"Enter number:";
    cin>>n;
    for (int i = n; i >= 1; i--)
    {
        cout<<i<<" ";
    }



    */

    /*print sum of first N natural numbers*/
    /*
    int n;
    cout<<"Enter num:";
    cin>>n;
    int sum=0;
    for (int i = 0; i <= n; i++)
    {
        sum=sum+i;
    }
    cout<<sum<<endl;

    */

    /*Print number from 1 to n*/
    /*
    int n;
    cout<<"Enter N:";
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        cout<<i<<" ";
    }

    */

    /*
    for (int i = 0; i < 5; i++)
    {
        cout<<i+1<<"="<<"Apna college"<<endl;
    }
    */

    return 0;
}