#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data=0;
        next=nullptr;
    }
};
void read(node * head){
    node * pnt= head;
    while (pnt!=nullptr)
    {
        cout<<pnt->data<<endl;
        pnt=pnt->next;
    }
}
node * insert(int  arr [],int n,node * head){
    node * pntr= head;
    node * neww= new node();
    neww->data=arr[0];
    pntr->next=neww;
    
    for (auto i = 1; i < n; i++)
    {   
        neww->next=new node();
        neww=neww->next;
        neww->data=arr[i];
       
    }
    return head;

}

int main(){
    node * head= new node();
    head->data=1;
    int n=3;
    int arr[n]={3,4,5};
    insert(arr,n,head);
    read(head);
    return 0;

}