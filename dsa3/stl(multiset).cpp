#include<bits/stdc++.h>
using namespace std;
int main(){
    multiset<int>ms;//it is sorted but not unique
    ms.insert(1);//{1}
    ms.insert(1);//{1,1}
    ms.insert(1);//{1,1,1}
    ms.insert(2);//{1,1,1,2}
    {
        for (auto i : ms)
        {
            cout<<i;
        }
        cout<<endl;
        
    }
    int cnt = ms.count(1);
    cout<<cnt<<" This is counting"<<endl;//it count 
    //in case i want to delete only one element of similar pattern 
    //i need its address to delete it so
    ms.erase(ms.find(1));//deleted single element
    //ms.erase(ms.find(1), ms.find(1)+1);-->deleted element in process(start, end)
    {
        for (auto i : ms)
        {
            cout<<i<< " This is erasing ";
        }
        cout<<endl;
    }                                                        //  (starting element, ending element is not deleted)                 


    cout<<endl;
    ms.insert(5);
    ms.insert(6);
    ms.insert(7);
    ms.erase(1);//all 1's erased all 1 element
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    ms.insert(1);
    {
        for (auto i:ms){
            cout<<i;
        }
        cout<<" This loop is ended"<<endl;
    }

    ms.erase(1);
    {
        for (auto i : ms)
        {
            cout<<i<<" last stage"<<endl;
        }
        
    }

    return 0;
}