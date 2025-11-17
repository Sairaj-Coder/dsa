#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node * next;
    public:
    Node(int data,Node * next){
        data=data;
        next=next;
        

    }
    Node(){
        data=0;
        next=nullptr;
    }
    
};
int main(){
    Node *head=new Node();
    cout<<head->data<<endl;//default construtor because no parameneter pass
    head->data=45;
    cout<<head->data<<endl;
     
    Node sairaj;
    sairaj.data=4;
    cout<<sairaj.data<<endl;
// to use construtor we can do this only
    Node rohan(10,0);


    return 0;
}