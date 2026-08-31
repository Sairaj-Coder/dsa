#include<bits/stdc++.h>
using namespace std;
void bubble_sorting(int array[],int n){//ascending order
    /*
    in this algorithm we are swaping two elements
    
    */
    for (int i = n-1; i >=1 ; i--)
    {
        for (int j = 0; j <=i-1 ; j++)
        {
            if (array[j]>array[j+1] )
            {
                int temp=array[j+1];
                array[j+1]=array[j];
                array[j]=temp;
            }
            
        }
        
    }
    

}
void bubble_sorting_decending(int arra[],int n){
    for (int i = n-1; i >=1; i--)
    {
        for (int j = 0; j < i-2; j++)
        {
            if (arra[j]<arra[j+1])
            {
                int temp=arra[j];
                arra[j]=arra[j+1];
                arra[j+1]=temp;
            }
            
        }
        
    }
    

}








int main(){
    int n;
    cout<<"Enter size of an array"<<endl;
    cin>>n;
    int array[n];
    for (auto i = 0; i < n; i++)
    {
        cout<<"Enter element=";
        cin>>array[i];
    }
    //bubble_sorting(array,n);
    bubble_sorting_decending(array,n);

    for (auto k:array)
    {
        cout<<k<<",";
    }
    
    return 0;
}