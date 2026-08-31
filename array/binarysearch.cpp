#include <bits/stdc++.h>
using namespace std;

int binarysearch(int arr[], int low, int high, int key)
{
    if (low <= high)
    {   
        
        int mid = ((low + high) / 2);
        cout<<"enter the search the mid="<<mid<<endl;
        if (arr[mid] == key)
        {   
            // cout<<"The index is="<<mid<<"And the key is="<<key<<endl;
            return key;
        }
         if (arr[mid] < key)
        {
            // cout<<"enter into 2nd half"<<endl;
            return binarysearch(arr, mid + 1, high, key);
            
        }
        if (arr[mid] > key)
        {   
            return binarysearch(arr, low, mid - 1, key);
        }
    }
    return -1;
}

int main()
{
    int n = 6;
    int arr[n] = {1, 2, 3, 4, 5, 16};
    int key=10;
    cout<<binarysearch(arr,0,n-1,key)<<endl;
}