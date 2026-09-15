#include<bits/stdc++.h>
using namespace std;
void bruteforce(){
     int n=4;
    int arr[n][n]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int temp[n][n]={0};
   
    int ec=n-1;
    int sr=0;
    
    while(ec>=0){
        //top
        for (int i = 0; i <= n-1; i++)
        {   
            
            temp[i][ec]=arr[sr][i];
            // temp[sc][sr]=arr[sr][sc];
        }
        sr++;
        ec--;

    }

}
void transpose(){
    int n=5;
    int arr[n][n]={
        {1,2,3,4,0},
        {5,6,7,8,0},
        {9,10,11,12,0},
        {13,14,15,16,0},
        {0,0,0,0,0},
    };
     
    //transpose
    int sr=0;
    int sc=0;
    int er=n-1;
    int ec=n-1;
    int cnt=0;
    while (sr<er)
    {
        for (int i = sr; i < n; i++)
        {
           swap( arr[i][sc],arr[sr][i]);
        }
        sr++;
        sc++;
        cnt++;
    }
}

int main(){
    int n=4;
    int arr[n][n]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16},
        
    };
    
    //transpose
    int sr=0;
    int sc=0;
    int er=n-1;
    int ec=n-1;
    int cnt=0;
    while (sr<er)
    {
        for (int i = sr; i < n; i++)
        {
           swap( arr[i][sc],arr[sr][i]);
        }
        
        sr++;
        sc++;
        cnt++;
    }
    for(auto it : arr){
        reverse(it,it+n);
    }
    
    
    //


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
        
    }
    
    
    return 0;
}