#include<bits/stdc++.h>
using namespace std;
void explaindeque(){
    deque<int>dq;
    dq.push_back(1);//{1}
    dq.emplace_back(2);//{1,2}
    dq.push_front(4);//{4,1,2}
    dq.emplace_front(3);//{3,4,1,2}
    for (auto i : dq)
    {
        cout<<i<<endl;
    }
    dq.pop_back();//{3,4,1}
    dq.pop_front();//{4,1}
    dq.back();//returns last element of deque
    int x = dq.front();//return first element of deque
    cout<<x<<" Returns first element"<<endl;
    //rest of function same as vector
    //begin,end,rbegin,rend,clear, insert,size,swap
}
int main(){
    explaindeque();

    return 0;
}