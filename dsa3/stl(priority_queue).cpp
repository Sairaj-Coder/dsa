#include<bits/stdc++.h>
using namespace std;
int main(){
    //priority_queue basically arrange elment in descending order or from max to min
    //max heap
    priority_queue<int>pq;//here names are declare
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.push(8);//{8,5,2}
    pq.emplace(1);//{8,5,2,1}
    cout<<pq.top()<<endl;//now here it automatically shows maximum value
    pq.pop();//maximum value will removed and next max will be printed
    cout<<pq.top()<<endl;//now maximuum value is 5

    {
    //now syntax for minimum value is
    //this is known as min heap
    priority_queue<int, vector<int>, greater<int>>pq;

    pq.push(5);//{5}       
    pq.push(9);//{5,9}
    pq.push(3);//{3,5,9}
    pq.emplace(1);//{1,3,5,9}
    cout<<pq.top()<<endl;
    }
    /*
    Time complexcity=>1) push and pop = log n
                      2)top=big O(1)  
    
    */





    return 0;
}