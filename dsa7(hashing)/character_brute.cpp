#include<bits/stdc++.h>
using namespace std;
void bruteforce(){
    int cnt=0;
    string arra[]={"sairaj","sairaj","a","b","a","a"};
    for (auto i :arra)
    {
        if (i=="sairaj")
        {
            cnt+=1;
        }
        
      
        cout<<i<<endl;
    }
    cout<<cnt<<endl;

}
int main(){
    int n;//length of an array
    cout<<"Enter length of array"<<endl;
    cin>>n;
    string arra2[n];

    for (auto i = 0; i < n; i++)
    {
        cout<<"Enter element"<<i+1<<":";
        cin>>arra2[i];
    }
    //enter elemnts are
    for (auto i = 0; i < n; i++)
    {
        cout<<arra2[i];
        
    }
    return 0;
}