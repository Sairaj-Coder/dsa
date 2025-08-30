#include<bits/stdc++.h>
using namespace std;
int main(){
    //now as we know all number character symbol has specific ascii number all together are 256
    //for all lower case and upper case and symbol and number
    string a;
    cout<<"Enter string"<<endl;
    getline(cin,a);
    cout<<endl;
    int hash[256]={0};
    for (int i = 0; i <a.size(); i++)
    {
        hash[a[i]]+=1;//it is autocasting character in assci value
    }
    while (true)
    {   
        char b;
        cout<<"Enter character to check how many times it repeated"<<endl;
        cin>>b;
        cout<<hash[b]<<endl;
    }
    
    
    
    return 0;
}