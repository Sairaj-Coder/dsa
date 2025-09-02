#include<bits/stdc++.h>
using namespace std;
void insert_sort(int array[],int n){
    for (int i = 0; i <=n-1; i++)
    {
        int j=i;
        while (j>0 && array[j-1]>array[j])
        {
            int temp=array[j-1];
            array[j-1]=array[j];
            array[j]=temp;
            j--;
        }
        
    }
    


}
int main(){
    int n;
    cout<<"Enter size:"<<endl;
    cin>>n;
    int array[n];
    for (auto i = 0; i < n; i++)
    {
        cout<<"Enetr element:";
        cin>>array[i];
    }
    insert_sort(array,n);
    for (auto k:array)
    {
        cout<<k<<",";

    }
    
    
    return 0;
}