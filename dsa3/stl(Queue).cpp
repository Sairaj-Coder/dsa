#include<bits/stdc++.h>
using namespace std;
int main(){
    //queue= is fifo container first in first out 
    queue<int> q;//we cannot use curly bracess for queue we have to create it an empty
    q.push(1);//{1}
    q.push(4);//{1,4}
    q.push(6);//{1,4,6}
    q.push(5);//{1,4,6,5}
    q.push(2);//{1,4,6,5,2}
    cout<<q.back()<<endl;//here last element is 2
    q.back()+=5;
    cout<<q.back()<<endl;//here operation is perform on last elements
    cout<<q.front()<<endl;//first element is 1
    q.pop();//Will remove first element i.e 1
    cout<<q.front()<<endl; //now 4 is firsst element there fore fifo

// size swap empty same as stack

    return 0;
}