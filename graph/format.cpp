#include<bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int>que;
    que.push(5);//5
    que.push(6);//6 5
    que.push(1);//6 5 1
    que.push(61);//61 6 5 1
    cout<<que.top()<<endl;
    que.pop();
    cout<<que.top();


    return 0;
}