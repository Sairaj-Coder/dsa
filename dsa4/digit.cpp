

#include<bits/stdc++.h>
using namespace std;
void countdigit(){

    //Total digits in number enter
    int countt = 0 ;
    int n;
    cout << "Enter number:" << endl;
    cin >> n;
    while (n > 0) { //here n takes value of quotient 
        
        countt = countt + 1;
        n = n / 10;
    }
    cout << countt << endl;

}
void reversenum_typesating(){
    int num;
    string reverse_num;
    cout<<"Enter a number to reverse it:"<<endl;
    cin>>num;
    while (num>0)
    {
        int temp=num%10;
        reverse_num=reverse_num+to_string(temp);
        num=num/10;
    }
    cout<<reverse_num<<endl;
    //without typecasting it
}
void reverse_num(){
    int num;
    int reverse_num=0;//here if we remove 0 garbage value will be stored
    cout<<"Enter number to reverse it:"<<endl;
    cin>>num;
    
    while(num>0){
        int last_digit1=num%10;
        reverse_num=(reverse_num*10)+last_digit1;

        num=num/10;
    }
    cout<<reverse_num<<endl;
    
}
int palindrome(){
    int num;
    cout<<"Enter number to check is it palindrome:"<<endl;
    cin>>num; 
    int num3=num+0;
    int palindrome=0;//here if we remove 0 garbage value will be stored
    
    {
    while(num3>0){
        int last_digit1=num3%10;
        palindrome=(palindrome*10)+last_digit1;

        num3=num3/10;
    }
    }
    
    if (palindrome==num)
    {
        cout<<"True"<<endl;
        return true;
    }
    else{
        cout<<"False"<<endl;
        return false;
    }
    
}
void armstrong(){
    int num;
    cout<<"Enter num to check armstron:"<<endl;
    cin>>num;
    int num3=num + 0;
    int p=0;
    while (num3>0)
    {
        int temp=num3%10;
        p=(p+(temp*temp*temp));
        num3=num3/10;
    }
    cout<<p<<" , "<<num3<<" , "<<num<<endl;
    if (p==num)
    {
        cout<<"armstrong"<<endl;
    }
    else
    {
        cout<<"no"<<endl;
    }
}

void alldivision_vectorrs(){
    int num;
    int duplicate=0;
    cout<<"Enter number:"<<endl;
    cin>>num;
    vector<int>divi;
    for (auto i = 1; i <=num ; i++)
    {
        duplicate=(num%i);
        if (duplicate==0)
        {
            divi.push_back(i);
        }
    }
    for (auto i : divi)
    {
        cout<<i<<",";
    }
    
    
    
}
void alldivison(){
    int num;
    cout<<"Enter number"<<endl;
    cin>>num;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            cout<<i<<",";
        }
        
    }
    

}
void primenum(){
    int num;
    cout<<"Enter Num to check is it prime or not: "<<endl;
    cin>>num;
    vector<int>prime;
    for (int i = 1; i <= num; i++)
    {
        if (num%i==0)
        {
            prime.push_back(i);
        }    
    }
    if (prime.at(1)==num)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not prime"<<endl;
    } 
    //first logic 
    /*
    cout<<prime.size()<<" = This is size of vector"<<endl;
    int nu=prime.size();
    if (nu>2)
    {
        cout<<"This is not prime";
    }
    else
    {
        cout<<"Prime number"<<endl;
    }
    */    
}
void primeeasy(){
    int number;
    int cnt=0;
    cout<<"Enter num"<<endl;
    cin>>number;
    for (int i = 1; i <=number; i++)
    {
        if (number%i==0)
        {
            cnt++;
        }
        
    }
    if (cnt>2)
    {
        cout<<"Not prime"<<endl;
    }
    else
    {
        cout<<"prime"<<endl;
    }    
}
void gcd(){
    int n1,n2;
    cout<<"Enter number 1"<<endl;
    cin>>n1;
    cout<<"Enter number 2"<<endl;
    cin>>n2;
    int gcd=0;
    for (int i = 1; i <= min(n1,n2); i++)//here instead of 1 we can put min(n1 , n2)
                                        // and will reverse the loop from min value so we will get factor imediately
    {                                   //for(int i=min(n1,n2); i>=1;i--){if ((n2%i==0) and (n1%i==0)){gcd=i} break;}                        
        if ((n2%i==0) and (n1%i==0))
        {
            gcd=i;
        }
        
    }
    cout<<gcd<<endl;
    
}

int main(){

    //countdigit();
    //reversenum();
    //reverse_num();
    //palindrome();
    //armstrong();
    //alldivision_vectorrs();
    //alldivison();
    //primenum();
    //primeeasy();
    gcd();

    return 0;
}