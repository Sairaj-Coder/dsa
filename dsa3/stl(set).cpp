#include<bits/stdc++.h>
using namespace std; 
int main(){ 
    //set is container which sorted and unique
    //syntax=
    set<int>st;
    st.insert(1);//{1}
    st.emplace(2);//{1,2}
    st.insert(2);//{1,2}//unique so 2 is not added
    st.insert(4);//{1,2,4}
    st.insert(3);//{1,2,3,4}//sorted 
    /*/functionaliy of insert in vector
    can be used also, that only increases efficiency
    */
    //begin(),end(),rbegin(),rend(),size(),
    //empty(),and swap() are same as those of above
    {
    auto it = st.find(3);
    cout<<*(it)<<endl;//it was presend so it return it
    }  
    auto it = st.find(10);// it has return last element
    cout<<*(it)<<endl;
    st.erase(4);//it will erase 4 and will maintain its sorted order
    {auto it = st.find(4);
    cout<<*(it)<<endl;//4 is now been deleted
    }
    {
    int cnt = st.count(3);//if it is present it wil return otherwise 0 will be return if not
    cout<<cnt<<endl;
    int x=st.count(6);
    cout<<x<<endl;//return 0 as false because zero is not present
    }
    {
    auto it= st.find(3);
    st.erase(it);//here instead of iterator we can directly put element
    }
    {
    auto it1=st.find(2);
    auto it2=st.find(4);
    st.erase(it1,it2);// after erase {1,4,5}{first , last}
    }
    //lower bound() and upper bound() function works in same way
    //as in vector it does

    //this is the syntax
    //{1,2,3,4,5}
    {
    auto it = st.lower_bound(2);//watch video in description to understand
    auto it = st.upper_bound(3);   
    }
    //everything happen in time comlexity =log n

    return 0;

}