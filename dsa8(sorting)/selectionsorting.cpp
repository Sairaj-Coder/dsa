#include<bits/stdc++.h>
using namespace std;
void selection_sort(int array[],int n){//ascending order wala
    for (int i = 0; i < n-1; i++)
    {
        int mini=i;
        for (int j = i; j < n; j++)
        {
            if (array[j]<array[mini])
            {
                mini=j;
            } 
            
        }
        int temp=array[mini];
        array[mini]=array[i];
        array[i]=temp;
        
    }
    

}
void selection_sorting_descending(int arra[],int n){
    for (int i = 0; i < n-1; i++)
    {
        int max=i;
        for (int j = i; j < n; j++)
        {
            if (arra[j]>arra[max])
            {
                max=j; 
            }
            
        }
        int temp=arra[max];
        arra[max]=arra[i];
        arra[i]=temp;
        
    }
    

}


int main(){
    int n;
    cout<<"enter size:"<<endl;
    cin>>n;
    int arra[n];
    for (int i = 0; i < n; i++)
    {
        cout<<i+1<<"enter:";
        cin>>arra[i];
    }
    //selection_sort(arra,n);
    selection_sorting_descending(arra,n);
    //checking sorting
    {
    for (int i = 0; i < n; i++)
    {
        cout<<arra[i]<<",";
    }
    }
    
    
    return 0;
}