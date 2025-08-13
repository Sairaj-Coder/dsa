#include<bits/stdc++.h>
using namespace std;
int main(){
    //stack==lifo ==> last in first out it does not have indexces and very less operation
    //declaring stack syntax
    stack<int> st;
    st.push(1);//{1}
    st.push(2);//{1,2}
    st.push(3);//{1,2,3}
    st.push(4);//{1,2,3,4}
    st.emplace(6);//{1,2,3,4,6}
    cout<<st.top()<<endl;//this tell which elements is at top
    cout<<st.size()<<endl;//this tells size of stack 
    cout<<st.empty()<<endl;//checking empty of not
    
    stack<int> st1, st2;
    st1.swap(st2);//now stack is swap
    
    //time complexity bigo-Notation(1)
    return 0;
}
