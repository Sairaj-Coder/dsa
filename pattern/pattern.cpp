#include <iostream>
using namespace std;

void patter1()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        //     for (int j = n-i; j >=0 ; j--)
        //     {
        //         cout<<"*"<<" ";
        //     }
        //     cout<<endl;
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*" << " ";
        }
        cout << endl;
    }
}
void charapyramid()
{
    // int value=65;
    char value = 'B';
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << value << " ";
            value++;
        }
        cout << endl;
    }
}
void hollowrec()
{
    int n = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i == 1 || i == n)
        {
            for (int j = 1; j <= n; j++)
            {
                cout << "*" << " ";
            }
            cout << endl;
        }
        else
        {
            for (int j = 1; j <= n; j++)
            {
                if (j == 1 || j == n)
                {
                    cout << "*" << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
            cout << endl;
        }
    }
}
void holl2()
{
    int n = 4;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n + 1; j++)
        {
            if (i == 1 || i == n)
            {
                cout << "*";
            }
            else
            {
                if (j == 1)
                {
                    cout << "*";
                }
                else if (j == n + 1)
                {
                    cout << "*";
                }
                else
                {
                    cout << " ";
                }
            }
        }
        cout << endl;
    }
}
void invertedsquare()
{
    int n = 4;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << " * ";
        }
        cout << endl;
    }
}
void floid_triangle()
{
    int n = 5;
    int value = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << value++ << " ";
        }
        cout << endl;
    }
}
void diamond()
{
    int n = 10;
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j < n; j++) // space
        {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) // star
        {
            cout << "*";
        }
        for (int j = 1; j < i; j++) // star
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++) // space
        {
            cout << " ";
        }

        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j < n - i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void butterfly()
{
    int n = 80;
    for (int i = 1; i <= (n / 2); i++)
    {
        // start
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = n - (2 * i); j > 0; j--)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 1; i <= (n / 2); i++)
    {
        // star
        for (int j = (n / 2) - i; j > 0; j--)
        {
            cout << "*";
        }

        // space
        for (int j = 1; j <= 2 * i; j++)
        {
            cout << " ";
        }

        // star
        for (int j = (n / 2) - i; j > 0; j--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void rhombus()
{
    int num = 15;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= num; j++)
        {
            cout << "*";
        }
        cout<<endl;
    }
}
void palindronicpattern(){
    int num=5;
    for (int i = 1; i <=num ; i++)
    {
        for (int j = num-i; j >= 1; j--)
        {
            cout<<" ";
        }
        /*backward*/
        for (int j = num-i; j >= i; j--)
        {
            cout<<j;
        }
        cout<<endl;
        
        
    }
    
   
    
    
}
void triangle(){
     
    for (int i = 1; i <=5 ; i++)
    {
        for (int j = 1; j <=i ; j++)
        {

        }
        cout<<endl;
    }
}
/*
1 
01
101
0101
10101
*/
int main()
{
    // patter1();
    // charapyramid();
    // hollowrec();
    // holl2();
    // invertedsquare();
    // floid_triangle();
    // diamond();
    // butterfly();
    //rhombus();
    palindronicpattern();
    //triangle();
    return 0;
}