#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=11;
    int arr[n]={1,1,2,2,3,3,4,5,5,6,6};
    int low=0;
    int high=n-1;

    while (low<=high)
    {
        int mid = (low+high)/2;

        if(mid%2==0){
            if(arr[mid]==arr[mid+1]){
                low=mid+2;
            }
            else{
                high=mid;
            }

        }
        else if(mid%2!=0){
             if(arr[mid]==arr[mid-1]){
                low=mid+2;
            }
            else{
                high=mid;
            }
        }
        else{
               break;
        }
    }
        cout<<arr[low]<<endl;
    cout<<arr[high]<<endl;





    //my stuff
    // while (low<=high)
    // {
        
    //     if(arr[low]==arr[low+1]){
    //         low=low+2;

    //     }
    //     if(arr[high]==arr[high-1]){
    //         high=high-2;
    //     }
    //     else {
    //         break;
    //     }

    // }
    // cout<<arr[low]<<endl;
    // cout<<arr[high]<<endl;

    
    return 0;
}