#include<bits/stdc++.h>
using namespace std;
/*Given an array nums of size n which may contain duplicate elements, return a list of pairs where each pair 
contains a unique element from the array and its frequency in the array.
You may return the result in any order, but each element must appear exactly once in the output.
Examples:
Input: nums = [1, 2, 2, 1, 3]
Output: [[1, 2], [2, 2], [3, 1]]
Explanation:
- 1 appears 2 times
- 2 appears 2 times
- 3 appears 1 time
Order of output can vary.
Input: nums = [5, 5, 5, 5]
Output: [[5, 4]]
Explanation:
- 5 appears 4 times.
*/
#include<bits/stdc++.h>
//hw remaining
using namespace std;
int main(){
    int n;
    cout<<"enter size"<<endl;
    cin>>n;
    int arra[n];
    cout<<"Enter element of array"<<endl;
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter element"<<i+1<<":";
        cin>>arra[i];
    }
    
    for(auto i:arra){
        cout<<"elemnt:"<<i<<endl;
    }
    int hash[10]={0};
    int most_frequ=0;
    for (int i = 0; i < n; i++)
    {
        hash[arra[i]]++;
        if (hash[i]>most_frequ)
        {
            most_frequ=i;
        }
        
    }
    cout<<most_frequ<<" the max"<<endl;
    
    /*
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arra[i]]+=1;
    }
    int max_freq=0;
    int most_frw_element=0;
    for (auto & p :mpp)
    {
        if(p.second>max_freq){
            max_freq=p.second;
            most_frw_element=p.first;
        }
    }
    cout<<"most frequent:"<<most_frw_element<<" which is max_freq"<<max_freq<<endl;
    */
    
    
    
    
    return 0;
}