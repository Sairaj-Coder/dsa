#include<bits/stdc++.h>
using namespace std;

const  int n=4;//rows
const  int m=4;//col
/**
void brute(){
     int arr[n][m] ={
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1},
    };
//row   
void row(int arr[n][m],int n,int m){
    for (int i = 0; i < m; i++)
    {
        arr[n][i]=-1;
    }
    
}
//col
void col(int arr[n][m],int n,int m){
    for (int i = 0; i < n; i++)
    {
        arr[i][m]=-1;
    }
    
}
for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==0){
                row(arr,i,m);
                col(arr,n,j);
            }
        }
        cout<<endl;
        
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(arr[i][j]==-1){
                
                arr[i][j]=0;
            }
        }
        cout<<endl;
        
    }
    

    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<",";
        }
        cout<<endl;
        
    }
    

}
 */
void bettersol(){
    int arr[n][m] ={
        {1,1,1,1},
        {1,0,0,1},
        {1,1,0,1},
        {1,1,1,1},
    };
    int narr[n]={0};
    int marr[m]={0};
   
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if( arr[i][j]==0){
            //row ==>i//n
            //col==>j//m
            narr[i]=1;
            marr[j]=1;
           }
        }
        // cout<<endl;
        
    }
    // for (int i = 0; i < m; i++)
    // {
    //     cout<<marr[i]<<",";
    // }
    // cout<<endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout<<narr[i]<<",";
    // }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
                if(narr[i]==1 || marr[j]==1){
                    arr[i][j]=0;
                }    
        }
        
        
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout<<arr[i][j]<<",";  
        }
        cout<<endl;
    }

}
int main(){
   
    
    return 0;
}