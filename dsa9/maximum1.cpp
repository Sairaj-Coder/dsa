#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=6;
    int arr[n]={1,1,0,1,1,1};
    int cnt = 0;
    int max =0 ;
    for(int i=0;i<n;i++){
        if (arr[i]==1)
        {   
            cnt++;
            if (cnt>max)
            {
                max=cnt;
            }
            
        }
        else{   
            cnt=0;  
        }
        
    }
    cout<<endl;
    cout<<max;




    return 0;
}