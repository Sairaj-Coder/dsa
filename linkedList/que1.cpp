#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    //cin>>k;
	    for(int i=n-1;i>=1;i--){
            for (int j = 0; j < i-1; j++)
            {
                if(arr[j]>arr[j+1]){
                    int temp=arr[j];
                    arr[j]=arr[j+1];
                    arr[j+1]=temp;
                }
            }
            
        }
        for (auto it : arr)
        {
            cout<<it<<",";

        }
        
        // for (int i = 0; i < n; i++)
        // {
        //     if(arr[i]==k){
        //         cout<<i+1<<endl;
        //     }
        // }
        
	    
	}

}