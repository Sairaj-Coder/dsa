#include<bits/stdc++.h>//array amd vector
using namespace std;    //first method is bruteforce -->better-->optimal
//asked interver about test case and dont solve question imediately take long time
//largest integer
void selection_bruteforce(int arra[],int n){
    //bruteforce we can sort it according to ascending or descending order and 
    //we can print first or last element
    //ex-->selection sort 
    //time complexcity=O(nlogn)
    for (int i = 0; i < n-1; i++)
    {
        int mini=i;
        for (int j = i; j < n; j++)
        {
            if (arra[j]<arra[mini])
            {
                mini=j;
            }
            
        }
        int temp=arra[mini];
        arra[mini]=arra[i];
        arra[i]=temp;
        
    }
    cout<<arra[n-1]<<":This is way"<<endl;
    
}
void comparing(int arra[],int n){
    //in this way we campare every element
    //optimal solution-->time complexcity O(N)
    //we can put x equal arra[first]

   
    int x=0;
    for (int i = 0; i < n; i++)
    {
        if(x<arra[i]){
            x=arra[i];

        }
    }
    cout<<"largest element is ="<<x<<endl;
}
//second largest and smallest can be find easily by sorting but in case of similar element it create problem
//int arr={1,1,4,4,5,5,7,7}->second largest=5 and second smallest=4 
//second largest=>with sorting last second and with out sorting
//with sorting
void second_largest_(){
    //brute sorting=n-1 for same element
    //NlogN+N
    int n=9;//size of an array
    int arra[n]={1,1,4,5,6,7,7,1,1};
    for (int i = 0; i < n-1; i++)
    {
        int mini=i;
        for (int j = i; j < n; j++)
        {
            if (arra[j]<arra[mini])
            {
                mini=j;
            }
            
            
        }
        int temp=arra[mini];
        arra[mini]=arra[i];
        arra[i]=temp;
        
        
    }//here we sorted
    //now finding second largest
    int second_larg = arra[n-1];
    for (int i = n-1; i >= 0; i--)
    {
        if (arra[i] != second_larg)
        {
            second_larg = arra[i];   
            break;
        }    
    }
    cout<<second_larg<<endl;
}

void second_largest1(int arra[],int n){
    //first find large and then compare with it
    int mini=0;
    for (int i = 0; i < n; i++)
    {
        if(arra[mini]<arra[i]){
            mini=i;
        }
        
    }
    cout<<arra[mini]<<" | ";
    int second=0;
    for (int i = 0; i < n; i++)
    {
        if (arra[mini]!=arra[i] && arra[second]<arra[i])
        {
            second=i;
        }
    }
    cout<<arra[second]<<endl;   
}
void optimal_approch(int arra[],int n){


    int Secondlargest=INT_MIN;//6-->7
    int largest=arra[0];//9
    
    for (int i =1 ; i < n; i++)
    {
        if (arra[i]>largest)
        {
            Secondlargest=largest;
            largest=arra[i];
        }
        else if (arra[i]<largest and arra[i]>Secondlargest)
        {
            Secondlargest=arra[i];
            
        }
    }
    cout<<"largest is="<<largest<<endl;
    cout<<"second largest is="<<Secondlargest<<endl;
    

    
}

void smallest_optimal(int arra[],int n){
    int smallest=arra[0];//6--->7
    int second_smallest=INT_MAX;//9
    for (int i = 1; i < n; i++)
    {
        if (arra[i]<smallest)
        {
            second_smallest=smallest;//4
            smallest=arra[i];//1
        }
        else if (arra[i]>smallest and arra[i]<second_smallest)
        {
            second_smallest=arra[i];
        }
        
        
    }
    cout<<"This smallest="<<smallest<<endl;
    cout<<"This is second smalled="<<second_smallest<<endl;

}

void check_sorted(int arra[],int n){
    
    for (int i =0; i < n-1; i++)
    {
        if (arra[i]<=arra[i+1])
        {
            
        }
        else
        {
            cout<<"No"<<endl;
            break;
        }
        
        
        
        
    }
    cout<<"Sorted"<<endl;
    

}
int main(){
    int n=8;
    int arra[n]={1,2,9,12,54,78,95,91};
    //selection_bruteforce(arra,n);
    //comparing(arra,n);
    //second_largest_();
    //second_largest1(arra,n);
    //optimal_approch(arra,n);

    //above all where for largest and second largest
    //second smallest
    //smallest_optimal(arra,n);

    //check wheather the array is sorted or not
    //check_sorted(arra,n);//ascending order
    
    return 0;
}