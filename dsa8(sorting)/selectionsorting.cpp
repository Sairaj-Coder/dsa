#include<bits/stdc++.h>
using namespace std;
void selection_sort(int array[],int n){
    for (int i = 0; i <= n-2; i++)
    {
        int mini=i;
        for (int j = i; j <= n-1; j++)
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
    selection_sort(arra,n);
    //checking sorting
    {
    for (int i = 0; i < n; i++)
    {
        cout<<arra[i]<<",";
    }
    }
    
    
    return 0;
}