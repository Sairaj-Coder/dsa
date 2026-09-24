#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    int fact=1;
    for (int i = 1; i <= n; i++)
    {
        fact=fact*i;
    }
    return fact;
    
}
void pascaltrianglebrute(){
    //given row=5 col=3  combination formula (r-1)=n
    //                                           C     = (n!)/(r!)(n-r)!
    //                                            (col-1)=r
      int row=5;
    int col=3;
    int n=row-1;
    int r=col-1;
    int factn=factorial(n);
    int factr=factorial(r);
    int factnr=factorial(n-r);
    int ans = factn/(factnr*factnr);
    cout<<ans<<endl;
}

//better optimal sol for combination--
int comb(int n , int r){
    int res=1;
    for (int i = 0; i < r; i++)
    {
        res=res*(n-i);
        res=res/(i+1);
    }
    return res;
    
}


int main (){
//     int n=6;
//     int arr[n][n]={{1},
// };
    /*
         1
        1 1
       1 2 1
      1 3 3 1
     1 4 6 4 1
    
    */
    //given row=5 col=3  combination formula (r-1)=n
    //                                           C     = (n!)/(r!)(n-r)!
    //                                            (col-1)=r
  /*-->better solution
    int row=5, col=3; 
   int r=row-1;
   int c=col-1;
   cout<<comb(r , c);
*/

//question two== print any nth row
    //we know number of element = number of row    
    /*
   int n=4;
    int row=n-1;
    int col=0;
    while(col<=row){
        cout<<comb(row , col)<<",";
        
        col++;
    }  
        */ 
//this was for all pascal triangle   
  
    // int n=5;
    
    // int row=0;
    // for (int i = 0; i < n; i++)
    // {
    // int col=0;
    //   while(col<=i){
    //     cout<<comb(i , col)<<",";
        
    //     col++;
    // }   
    // cout<<endl;
    // }
    
   
    

    return 0;
}