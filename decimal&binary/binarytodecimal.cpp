#include<bits/stdc++.h>
#include<cmath>
using namespace std;


int Binary_decimal(int num1){
    int num=num1;
    int cnt=0;
    int sum=0;
    while (num>0)
    {
        int last=num%10;
        //cout<<last<<endl;
        int power=pow(2,cnt);
        last=last*power;
        sum=sum+last;
        cnt=cnt+1;
        num/=10;
    }
    cout<<"sum="<<sum<<endl;
    return sum;
    
}

int decimal_binary(int num1){
    int num=num1;
    int count=0;
    int binary=0;
    while (num>0)
    {
        int lastdigit=num%2;
        // cout<<lastdigit<<endl;
        float power=lastdigit*pow(10,count);
        //cout<<power<<endl;
        binary=binary+power;
        count++;
        num/=2;
    }
    cout<<binary<<endl;
    return binary;
}
int main(){
   //Binary_decimal(110);
   //decimal_binary(4);
 
   
    
  
   
   
 
    
    
   
   
   
    return 0;
}