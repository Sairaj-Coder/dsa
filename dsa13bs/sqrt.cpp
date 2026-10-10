#include<bits/stdc++.h>
using namespace std;
int main(){
    int low=0;
        int high=x;
        int i=-1;
        while(low<=high){
            long long mid = (low+high)/2;
            if((mid*mid)==x) return mid;
            
            else if((mid*mid)>x) high=mid-1;

            else{ 
                low=mid+1;
                i=mid+1;
            }
        }
    
    return 0;
}
























//brute force
/*
class Solution {
public:
    int mySqrt(int x) {
        if(x==0){
            return 0;
        }
        for(long long i=0;i<x;i++){
            if(i*i==x){
                return i;
            }
            else if(i*i>x) {
                return i-1;
            }
        }
        return 1;
    }
};


*/