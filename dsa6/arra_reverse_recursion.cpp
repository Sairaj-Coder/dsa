#include<bits/stdc++.h>
using namespace std;
//we did this with two pointer
void reversearry(int i,int j,int arra[]){
    if (i>=j)
    {   
        for (int k = 0; k < 6; k++)
        {
            cout<<arra[k]<<",";// without this loop also we can return and in main function we can print array
        }
        
        return;
    }
    swap(arra[i],arra[j-1]);
    reversearry(i+1,j-1,arra);
}
//using one pointer
void array_reverse_1pointer(int i,int arra[]){
    int j=5;
    if (i>=(j-i))
    {
        for (int l = 0; l < 6 ; l++)
        {
            cout<<arra[l]<<",";// without this loop also we can return and in main function we can print array
        }
        return ;
        
    }
    swap(arra[i],arra[j-i]);
    array_reverse_1pointer(i+1,arra);
    
    
    
}

int main(){
    int arra[]={7,8,9,3,2,5};
    int i=0;
    int j=(sizeof(arra)/sizeof(arra[0]));//size of array, otherwise we can declared variable and fixed the length

    reversearry(i,j,arra);//here we can also print array//these  are two techniques note if this function is on then downside
    // will print same array as it swap and again downside function is swap
    cout<<endl;
    array_reverse_1pointer(i,arra);//here also we can print 
    return 0;

   
}