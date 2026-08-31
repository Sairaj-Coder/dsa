#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    :For a positive N , WAP that prints the first N Fibonacci numbers.
    (Assume N>=2 )Fibonacci series : 0,1,1,2,3,5,8,13,21,34
    This is a series where each number is a sum of previous 2
    numbers in the series.
    Eg:
    1=0+1,
    2=1+1,
    3=1+2,
    5=2+3,
    0=x+y
    8=3+5

    & soon
    */
    /*
     int x=0;
     int y=1;
     cout<<x<<" "<<y<<" ";
     for (int i = 2; i < 10; i++)
     {
         int temp=x+y;
         cout<<temp<<" ";
         x=y;
         y=temp;


     }

 */
    /*
    WAP to input a number and check whether the number is an Armstrong number or not.
    An Armstrong number is a number that is equal to the sum of cubes of its digits
    */
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    int armstrong = 0;
    while (num > 0)
    {
        int lastdigit = num % 10;
        float power = pow(lastdigit, 3);
        armstrong = armstrong + power;

        num = num / 10;
    }
    // cout<<endl;
    cout << armstrong << " ";

    return 0;
}
