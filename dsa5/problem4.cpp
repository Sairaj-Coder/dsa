#include<bits/stdc++.h>
using namespace std;
//print name n times
int cnt=1;
void name_n_time(string name,int num){
    if (cnt==num)
    {   cout<<name<<" "<<cnt<<endl;
        return;
    }
    cout<<name<<" "<<cnt<<endl;
    cnt++;
    name_n_time(name,num);
    
    

}
//another easy-way is
void easy_way(int i1,int n2){//without using global variable0
    if (i1>n2)
    {
        return;
    }
    cout<<"Sairaj:"<<i1<<endl;
    easy_way(i1+1,n2);

    
    

}

int main(){
    cout<<"Enter name:"<<endl;
    string s;
    cin>>s;
    cout<<"Enter how many times to print:"<<endl;
    int n;
    cin>>n;
    //name_n_time(s,n);
    //now we are taking i as input for easy_way or strivers logic
    int i=1;
    easy_way(i,n);

    return 0;
}