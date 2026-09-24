#include<bits/stdc++.h>
using namespace std;
int combination(int row , int col){
    int r=row;
    int c=col;
    int reqr = 1;
    int reqcol=1;
    for (int i = 0; i < col ; i++)
    {
        reqr = (reqr*r);
        // cout<<"First row is"<<reqr<<"And R is"<<r<<endl;
        r--;
        reqcol= reqcol*c;
        //  cout<<"First col is"<<reqcol<<"And C is"<<c<<endl;
        c--;
    }
    int com = (reqr/reqcol);
    // cout<<com<<endl;
    // cout<<reqr<<endl;
    // cout<<reqcol<<endl;
    cout<<com<<",";
    return com;
    // return com;
    
}
int main(){
    // n        row-1      
    // C      = e       == n!
    //  n-r     col-1     (n-r)!*r!
    // rowIndex = 3
  // Output: [1,3,3,1]
    int row ;
    cin>>row;
    
    int col=1;
    
    while (col<=row)
    {   
    
        combination(row-1 , col-1);
        col++;
    }
    /*
    
    int combination(int row, int col) {
    long long r = row;
    long long c = col;
    __int128 reqr = 1;
    __int128 reqcol = 1;

    for (int i = 0; i < col; i++) {
        reqr = reqr * r;
        r--;

        reqcol = reqcol * c;
        c--;
    }

    __int128 com = reqr / reqcol;

    return (int)com;
}
    */
   

    return 0;
}