#include<bits/stdc++.h>
using namespace std;
int main(){
    for (int i = 1; i <=5; i++)
    {
        //space
        for (int j = 1; j <=5-i ; j++)
        {
            cout<<" ";
        }
    //    cout<<endl;
        for (int x = 1; x <= i; x++)
        {
            cout<<"*";
        }
        //star
        
        for (int y = 2; y <= i; y++)
        {
            cout<<"*";
        }
        

        //space
        for (int j = 1; j <=5-i ; j++)
        {
            cout<<" ";
        }
        cout<<endl;
        
        

    }
    
    return 0;
}