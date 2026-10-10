#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    int arr[n]= {2,1,2,2,2};
    int low=0;
    int high=n-1;
    int target=arr[0];
    while(low<=high){
        int mid = (low+high)/2;
       
        //left sorted
             if(arr[high]<=arr[low] && arr[mid]>=arr[high]){
                target=min(target,arr[mid]);
                low=mid+1;
            }
            //right sorted
            else{
               target=min(target,arr[mid]);
                high=mid-1;
            }
          

        }
    cout<<target<<endl;
    return 0;
}
/*
class Solution {
public:
    int findMin(vector<int>& arr) {
        int low = 0;
        int high = arr.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            // Duplicate case
            if (arr[low] == arr[mid] && arr[mid] == arr[high]) {
                low++;
                high--;
            }
            
            // Minimum is in right half
            else if (arr[mid] > arr[high]) {
                low = mid + 1;
            }
            
            // Minimum is at mid or in left half
            else {
                high = mid;
            }
        }

        return arr[low];
    }
};

*/