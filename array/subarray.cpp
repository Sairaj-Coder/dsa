#include <bits/stdc++.h>
using namespace std;
void subarr(int arr[], int n)
{
    for (int start = 0; start < n; start++)
    {
        for (int end = start; end < n; end++)
        {
            for (int ele = start; ele <= end; ele++)
            {
                cout << arr[ele];
            }
            cout << ",";
        }
        cout << endl;
    }
}
void maxsubarr(int arr[], int n)
{


    int sum3 = INT_MIN;
    for (int start = 0; start < n; start++)
    {


        
        for (int end = start; end < n; end++)
        {



            
            int sum2=0;
            for (int ele = start; ele <= end; ele++)
            {
                sum2 = sum2 + arr[ele];
                //cout << arr[ele];
            }
        
        
        
        
            if(sum2>sum3){
                sum3=sum2;
              

            }

            
        }
    }



    cout << "The sum is = " << sum3 << "..,";
    //cout << endl;

}

void maxSubarroptimal(int arr[],int n){
    int sum=INT_MIN;

    for (int i = 0; i < n; i++)
    {
        int currentsum=0;

        for (int j = i; j < n ; j++)
        {
            currentsum=currentsum+arr[j];
        }
        sum=max(currentsum,sum);
        
    }
    cout<<"The maximum sum is:"<<sum<<endl;
    

}

void kadanesalgo(int arr[],int n){
    int maximumsum=INT_MIN;
    int currentsum=0;
    for (int i=0;i<n;i++){

        currentsum=currentsum+arr[i];
        
        maximumsum=max(currentsum,maximumsum);

        if(currentsum<0){
            currentsum=0;
        }


    }
    cout<<maximumsum<<" ";

}





int main()
{
    int arr[] = {-1,-2, -3,-4};
    int n = sizeof(arr) / sizeof(int);

    // subarr(arr,n);

    // maxsubarr(arr, n);
    //maxSubarroptimal(arr,n);
    
    //kadanesalgo(arr, n);
    return 0;
}