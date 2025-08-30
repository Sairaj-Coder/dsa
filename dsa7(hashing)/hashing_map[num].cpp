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
    map<int,int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arra[i]]+=1;
    }
    //iterating in map this isalso way that we can move in mpp3

    
    for(auto i:mpp){
        cout<<i.first<<"-->"<<i.second<<endl;

    }
    while (true)
    {   
        int x;
        cout<<"Enter element:"<<endl;
        cin>>x;
        cout<<mpp[x]<<endl;
    }
    
    
    return 0;
}
//in unorder_map time complexcity is big-O-(n) for worst case and best big-O-(1)
/*
note in case we have to store a element who is not in size
arra={1,4,5,6,10} 
hash arr={0}// has maximum size of 6 so 10 will not be stored
so we used division method to store linear chaning is done
arra[i]%10;
collision in case all array element are store in one hast array index

In hashing, a collision occurs when two different keys produce the same hash value 
(index) in the hash table. This means multiple keys are trying to occupy the same slot. 
Collision resolution techniques 
(like chaining or open addressing) are needed to handle these situations
*/
//unorder map cannot have pair as key but map can
