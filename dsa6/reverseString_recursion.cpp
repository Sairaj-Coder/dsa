#include<bits/stdc++.h>
using namespace std;
string palindrom_string(string a,int i){
    int n=a.length()-1;
    if(i>=n){
        cout<<a<<" this is function"<<endl;
        return a;

    }

    swap(a[i],a[n-i]);
    palindrom_string(a,i+1);
}
/*
//little bit error in this his logic
string palindrom_string2(string a,int i){
    int n=a.length()-1;
    if(i>=n){
        cout<<a<<endl;
        return a;

    }

    
    if (a[i]==a[n-i])
    {       
        if (a[i]!=a[n-i]){
    
            cout<<"false"<<"f"<<endl;
            return "false";
        }
        else{
            swap(a[i],a[n-i]);
            palindrom_string(a,i+1);
            cout<<"true"<<endl;
            return "true";

        }
    
    }    
    
}
    */

int main(){
    
    string a;
    string g=a;
    cout<<"Enter word to check palindrome"<<endl;
    cin>>a;
    
    
    int i=0;
    //palindrom_string2(g,i);==>his logic
    cout<<palindrom_string(a,i); 
    //string x=palindrom_string(a,i);
    cout<<"a="<<a<<" g="<<g<<" x="<<endl;
    
   
    // if (x==g)
    // {
    //     cout<<"True"<<endl;
    // }
    // else
    // {
    //     cout<<"false"<<endl;
    // } 
        
    return 0;
}