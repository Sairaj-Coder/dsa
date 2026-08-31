//recursion
#include<bits/stdc++.h>
using namespace std;


void name(int n,int i){

    if(i==n){
        return;
    }
    cout<<i<<" , "<<endl;
    i++;
    name(n,i);//update then passed

}
void name2(int n,int i){//passed value then update--more prefarable

    if(i==n){
        return;
    }
    cout<<i<<" , "<<endl;
    
    name(n,i+1);

}

void loop(int n){
    int i=0;
    if(i==n){
        return;
    }
    cout<<n<<" ";
    loop(n-1);
}
void reverseloop(int n,int i){
    
    if(i==n){
        return;
    }
    reverseloop(n,i+1);
    cout<<i<<" ";

}

void summ(int sum,int i){
    if(sum<1){
        cout<<i;
        return;
    }
    
    summ(sum-1,i+sum);
}

int factorial(int n){
    if(n==1){
        return 1;
    }
    return (n*factorial(n-1));
}


void reversearr(){
    int n=5;
    int arr [n] ={1,2,3,4,5};
    for (int i = 0; i < (n/2); i++)
    {   
        swap(arr[i],arr[n-i-1]);
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ,";
    }
    
}

void arrrever(int ar[],int n,int i){
    if(i>=n/2){
        return ;
    }
    swap(ar[i],ar[n-i-1]);
    arrrever(ar,n,i+1);

}
void palindromestring(string st,int i){
    int n = (st.length()-1);
    if(i>=(n/2)){
        cout<<st<<endl;
        return ;
    }
    swap(st[i],st[n-i]);
    palindromestring(st,i+1);
}
void fibonacibyloops(int n){
    int x=0;
    int x2=1;
    
    cout<<x<<","<<x2<<endl;
    for (int i=2; i < n; i++)
    {
        int temp=x+x2;
        x=x2;
        x2=temp;
        cout<<temp<<" ";
    }

    
}

int main(){
    int n=5;
    // int i=0;
    // int arr[n]={1,2,3,4,5};
    // string st ="MadaM";
    // int n = st.length();
    // palindromestring(st,i);
     
    

    // name(n,i);
    // loop(10);
    // reverseloop(n, i);
    // summ(n, i);
    // cout<<factorial(n);
    // arrayreverse(arr,n);
    //  arrrever(arr,n,i);
    fibonacibyloops(n);

    return 0;
}