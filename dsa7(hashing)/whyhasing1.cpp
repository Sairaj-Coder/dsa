//bruteforce
#include<bits/stdc++.h>
using namespace std;
int main(){
    int cnt=0;
    int arra[]={1,2,3,1,6,8,4,9,8,3,2,1};
    for(auto i:arra){
        if(i==3){
            cnt+=1;
        }
        
        
    }
    cout<<"this was the way to find any element how many times it appears:"<<cnt;
    return 0;
}