#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=4;
    int m=4;
    int arr[n][m]={
    {10, 20, 30, 40},
    {15, 25, 35, 45},
    {27, 29, 37, 48},
    {32, 33, 39, 50}
};
    int r=0;
    int c=m-1;
    int key=33;
  
    while (r<n && c>=0)
    {   int startcell=arr[r][c];
        if(startcell==key){
            cout<<"Founded";
            

            break;
        }
        if(startcell<key){
            cout<<"I am row"<<endl;
            //

            r=r+1;
        }
        if(startcell>key){
            cout<<"I am col:";

            cout<<c<<endl;
             cout<<startcell<<endl;

            c=c-1;
        }
     
    }
    

return 0;
}