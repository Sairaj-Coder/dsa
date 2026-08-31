#include<bits/stdc++.h>
using namespace std;

//check sorted or not 
void mysolution(int arr[], int n){//optimal solution //time complexcity is big(n)
    bool sorted=true;
    for (int i = 0; i < n-1; i++)
    {
        if(arr[i]<=arr[i+1]){
            //keeping empty because we didn't want to change bool
            
        }
        else{
            sorted=false;
            return;
        }
    }
    cout<<sorted<<", ";
    

}

int main(){
    int n=6;
    int arr[n]={1,2,2,3,3,4};
    mysolution(arr,  n);




}