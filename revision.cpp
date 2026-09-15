// #include<bits/stdc++.h>
// using namespace std;

// void reversee(int arr[],int start,int end){
//     while (start<end)
//     {
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
//     }

    
//     // for (int i = start; i < end; i++)
//     // {
//     //     swap(arr[i],arr[end-1-i]);
//     //     end--;
//     // }
   
// }


// int main(){
    // int n=6;
    // int arr[n]={2,-3,-6,-5,5,2};
    // for (int start = 0; start < n; start++)
    // {
    //     for (int end = (n-1);  end>= 0; end--)
    //     {
    //         for (int k = start ; k <= end; k++)
    //         {
    //             cout<<arr[k]<<",";
    //         }
    //         cout<<endl;
    //     }
    //     // cout<<endl;
        
    // }
    // cout<<endl;
    // cout<<endl;
    // cout<<endl;
    // cout<<endl;

    //sum  {2,-3,-6,-5,5,2}; //n=6
    // int sum=INT_MIN;
    // for (int i = 0; i < n; i++)
    // {
    //     int tempsum=0;
    //     for (int j = i; j < n; j++)
    //     {
           
    //         tempsum+=arr[j];
    //         if(tempsum>sum){
    //         sum=tempsum;
    //         }
            
            
    //     }

        
    // }
    // cout<<sum;
    // int n=5;
    // int arr[n]={12,14,13,11,15};
    // reverse(arr,n);
    // reversee(arr,n-1,n-2);
    // reversee(arr,n-3,0);
    // reversee(arr,0,n-1);
    // for (int i = 0; i < n; i++)
    // {
    //     int mini=i;
    //     for (int j = i; j < n; j++)
    //     {
    //         if(arr[mini]>arr[j]){
    //             mini=j;
    //         }
    //     }
    //     // cout<<mini<<",";
    //     swap(arr[mini],arr[i]);
        
    // }
    // for (int i = n-1; i >= 0; i--)
    // {
    //     for (int j = 0; j <i ; j++)
    //     {
    //         if(arr[j]>arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
        
    // }
    
    // for(auto it: arr){
    //     cout<<it<<",";
    // }
    // cout<<(5^5)<<endl;
    // int n=4;
    // int arr[n]={2,3,4,5};
    
    // int temp[n+1]={0};
    // int j=0;
    // for (int i = arr[0]; i <= n+arr[0]; i++)
    // {   
        
    //     temp[j]=i;
    //     j++;

    // }
    // for(auto it: temp){
    //     cout<<it<<",";
    // }
    // cout<<endl;
//     for(int i=0;i<n+1;i++){
//         if(arr[i]!=temp[i]){
//             cout<<"Element founded"<<endl;
//             cout<<temp[i]<<endl;
//             break;
//         }
//     }
    


//     return 0;
   
    // int i=0;
    // int j=0;
    // int diag1=0;

    // int diag2=0;
    // int x=0;//row
    // int y=n-1;//col
    // while (x<4)
    // {
    //     diag2+=arr[x][y];
    //     x++;
    //     y--;
    // }
    // cout<<diag2<<endl;


    // while (i<4)
    // {
    //     diag1+=arr[i][j];
    //     i++;
    //     j++;
    // }
    // cout<<diag1<<endl;
    
    // int n=4;//col
    // int m=5;//rows
    // int arr[m][n]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16},
    //     {17,18,19,20}
    // };
    // int sc=0;
    // int sr=0;
     
    // int ec=n-1;
    // int er=m-1;
    // int cnt=0;
    // while (sr<er || sc<ec)
    // {
    //     //top
    //     for (int i = sc; i <= ec; i++)
    //     {
    //         cout<<arr[sr][i]<<",";
    //     }
    //     cout<<endl;
    //     //right
    //     for (int i = sr+1; i <= er; i++)
    //     {
    //         cout<<arr[i][ec]<<",";
    //     }
    //      cout<<endl;
    //     //bottom
    //     for (int i = ec-1; i >= sc; i--)
    //     {
    //        cout<<arr[er][i]<<",";
    //     }
    //      cout<<endl;
    //     //left
    //     for (int i = er-1; i >= sr+1; i--)
    //     {
    //         cout<<arr[i][sc]<<",";
    //     }
    //     cout<<endl;
    //     sc++;
    //     sr++;
    //     ec--;
    //     er--;
        

    //     cnt++;
    // }
    
   
    // int ec=n-1;
    // int sr=0;
    // int er=m-1;
    // int sc=0;
    
    // int target=25;
    // while (ec>=sc || sr<=er  )
    // {   
    //     if(target==arr[sr][ec]){
    //         cout<<"found"<<endl;
    //         break;
    //     }
    //     else if(target>arr[sr][ec]){
    //         sr++;
    //     }
    //     else if(target<arr[sr][ec]){
    //         ec--;
    //     }
    // }
    //  int n=4;//col
    // int m=5;//rows
    // int arr[m][n]={
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16},
    //     {17,18,19,20}
    // };
    // int lr = 0;
    // int lc = 0;
    // int hr = m ;
    // int hc = n;
    
    // int target = 14;
    
  
    //     while (lc<= hc && lr<=hr)
    //     {
          
        
        
        
    //         int mr = ((lr+hr)/2);
    //     int mc = ((lc+hc)/2);
    //         if(target == arr[mr][mc]) {
    //             cout<<"found";
    //         }
    //        else if(target> arr[mr][mc]){
    //             lr = mr+1;
    //             lc = mc+1;
    //         }else if (target < arr[mr][mc])
    //         {
    //             hr = mr-1;
    //             hc = mc-1 ;
    //         }
            
        
    //     }
    // map<int,string>map1 = {
    //     {1 ,"Sairaj"},
    //     {2 ,"Sai"},
    // };
    // cout<<map1[1]<<endl;//initial
    // map1[4]="Vivek";
    // cout<<map1[4]<<endl;
    // map1[1]="Samruddhi";//overite
    // cout<<map1[1]<<endl;//new
    // map1[1]=map1[1]+"Sai";
    // cout<<map1[1];
//     int n=5;
//     int arr[n]={2,6,5,8,11};
//     map<int ,int>mpp;
   
//    int target=14;
//     int i=0;

//     while (i<n)
//     {
//         int more=target-arr[i];

//         auto value=mpp.find(more);
//         if(value!=mpp.end()){
//           //  cout<<value->first<<endl;
//           //  cout<<value->second<<endl;
//           cout<<more;
//             cout<<arr[i];
//         }
//         else{
//             cout<<"Not found"<<endl;
//             // cout<<mpp.end()<<endl;
//         }
//         mpp[arr[i]]=i;
//         i++;
//     }
    // int n=10;
    // int arr[n]={0,2,2,0,1,1,0,0,1,1};
    // int i=0;//0
    // int j=n-1;//2
    // int k=0;//1
    // while (k<=j)
    // {
    //    if(arr[k]==0){
    //     swap(arr[i],arr[k]);
    //     i++;
    //     k++;
    //    }
    //    else if(arr[k]==1){
    //     k++;
    //    }
    //   else if(arr[k]==2){
    //     swap(arr[k],arr[j]);
        
    //     j--;
    //    }

    // }
    // for(auto it: arr){
    //     cout<<it<<",";
    // }    


    // int arr[6] = {3,-2,1,-5,2,-4};
    // int positive = 0 ; 
    // int negative = 1;
    // int newarr[6] ={0};
    // for ( int i = 0; i < 6; i++)
    // {
    //     if(arr[i]< 0 ){
    //         newarr[i] = arr[positive] ;
    //         positive+=2;
    //     }else {
    //         newarr[i] = arr[negative];
    //         negative += 2;
    //     }
    // }
    // for(auto it: arr){
    // //     cout<<it<<",";
    //  } 
    

    



// }

#include <bits/stdc++.h>
using namespace std;

// Define a class to handle array manipulation
class ArrayManipulator {
public:
    // Function to rearrange elements by alternating sign
    vector<int> rearrangeBySign(vector<int>& A) {
        int n = A.size();

        // Create a result array of size n initialized with 0
        vector<int> ans(n, 0);

        // posIndex will store index for next positive number (even index)
        // negIndex will store index for next negative number (odd index)
        int posIndex = 0, negIndex = 1;

        // Loop through the original array
        for (int i = 0; i < n; i++) {
            if (A[i] < 0) {
                // Place negative numbers at odd indices
                ans[negIndex] = A[i];
                negIndex += 2;
            } else {
                // Place positive numbers at even indices
                ans[posIndex] = A[i];
                posIndex += 2;
            }
        }

        return ans;
    }
};

int main() {
    // Initialize the input array
    vector<int> A = {1, 2, -4, -5};

    // Create an object of the class
    ArrayManipulator obj;

    // Call the rearrange function
    vector<int> result = obj.rearrangeBySign(A);

    // Print the rearranged array
    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}




