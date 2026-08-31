#include<bits/stdc++.h>
using namespace std;
int reversenumber(int n){
    int rn=0;    
    while (n>0)
    {
        rn=(rn*10)+n%10;
        n=n/10;
    }
    cout<<rn<<endl;
    return rn;
}
void pallindromenumber(int n){
    int num=n;
    if(n== reversenumber(num)){
        cout<<"Palindrome:"<<n<<endl;
    } 
    else{
        cout<<"Non palindrome:"<<endl;
    }  
}
void armstrong(int n){
    int rn=0;    
    while (n>0)
    {   int cube = (n%10);
        rn=rn+(cube*cube*cube);
        n=n/10;
    }
    cout<<rn<<endl;
    // return rn;
}
void divisor(int n){
    int i=1;
    while (i<=n)
    {
        if(n%i==0){
            cout<<i<<",";
        }
        i++;
    }
    
}

void prime(int n){
    int count=0;
    int i=1;
    while (i<=n)
    {
        if(n%i==0){
            cout<<i<<",";
            count++;
        }
        
        i++;
    }
    if(count>2){
        cout<<"No Prime"<<endl;
    }
    else{
        cout<<"Prime"<<endl;
    }

}
int main(){
    int n=17;
    // reversenumber(n);
    // pallindromenumber(n);
    //  armstrong(n);
    // divisor(n);
    // prime(n);
    return 0;
}