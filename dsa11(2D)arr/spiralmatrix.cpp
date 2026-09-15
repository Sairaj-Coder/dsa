#include<bits/stdc++.h>
using namespace std;

// void spiralmatrix( int arr [][4],int n,int m ){//n==>row //m==>col 
   
//     int startcol=0;                             
//     int endcol=m-1;
//     int startrow=0;
//     int endrow=n-1;     
//     while (startrow<=endrow && startcol<=endcol)
//     {
    
    
                             
   
//     //top
//     for (int i = startcol; i <= endcol; i++)
//     {
//         cout<<arr[startrow][i]<<",";
//     }
//     cout<<endl;
//    //right
//     for (int j = startrow+1; j <= endrow; j++)
//     {
//         cout<<arr[j][endcol]<<",";
//     }
//     cout<<endl;
    
//     //bottom
//     for (int i = endcol-1; i >= startcol; i--)
//     {
//         if(startrow==endrow) break;
//         cout<<arr[endrow][i]<<",";
//     }
//     cout<<endl;
    
//     //left
//     for (int j = endrow-1; j >= startrow+1; j--)
//     {
//         if(startcol==endcol) break;

//         cout<<arr[j][startcol]<<",";
//     }
//     cout<<endl;
//     startcol++;
//     startrow++;
//     endrow--;
//     endcol--;
//      }

// }
void diagonalsum(){
      int n=4;
    int m=4;
    int arr[n][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int row=0;
    int col=0;
    int endrow=n-1;
    int endcol=0;
    int Rdiagnolsum=0;
    int Ldiagnolsum=0;
    while (row<n && col<m)
    {
       
       if (endcol==col && endrow==row)
        {
            Ldiagnolsum-=arr[endrow][endcol];
        }  
      Rdiagnolsum+=arr[row][col];
      row++;
      col++;
      Ldiagnolsum+=arr[endrow][endcol];
      endcol++;
      endrow--;
        
    }
    cout<<Rdiagnolsum<<endl;
    cout<<Ldiagnolsum<<endl;
    cout<<Ldiagnolsum+Rdiagnolsum<<endl;

}

int main(){
    
    int n=4;
    int m=4;
      
    int arr [n][4] = {
    {10,20,30,40},
    {15,25,35,45},
    {27,29,37,48},
    {32,33,39,50},
    
};
  int key=33;
  int srow=0;
  int scol=0;
  while (true)
  {
    if(key>arr[srow][scol]){
        srow++;
    }
    else {
        
    }
  }
  

    
    return 0;
}