#include<bits/stdc++.h>
using namespace std;
//how many unique elements in array with set as it does not contain 
//first applying brute force
int brute_force(vector<int>&arra,int n){
    set<int>st;//set store in ascending order
    //timecomplexcity=>nlogn+n
    //space=O(n)
    for (int i = 0; i < n; i++)
    {
        st.emplace(arra[i]);
    }
    int index=0;
    for (auto it: st )
    {
        //cout<<i<<",";
        //puting elements into array
        arra[index]=it;
        index++;
    }
    cout<<"Next move="<<endl;
    int x=st.size();
    return x;
    /*
    for (int x=0; x < st.size();x++)
    {
        cout<<arra[x]<<",";
    }
    */
}
int optimal_solution(vector<int>&arra,int n){//this soln is faulty little bit
    int i=0;
    for (int j = 1; j < n; j++)
    {
        if (arra[i]!=arra[j])
        {
            arra[i+1]=arra[j];
            i++;
        }
        
    }
    for(auto i:arra){
        cout<<i<<",";
    }
    return i+1;
    

}


int main(){
    int n;
    cout<<"Enter size of an array:";
    cin>>n;
    vector<int>arra;
    
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"Enter first element"<<i+1<<"=";
        cin>>x;
        arra.emplace_back(x);
        
    }
    int y=optimal_solution(arra,n);
    cout<<"Size is="<<y<<endl;
    // for (auto i :arra)
    // {
    //     cout<<i<<endl;
    // }
    
    /*
    int x=brute_force(arra,n);
    for (int i = 0; i < x; i++)
    {
        cout<<arra[i]<<",";
    }
    cout<<"These are unique elements"<<endl;
    
    */
    
    

    return 0;
}