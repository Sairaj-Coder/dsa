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
node * insert(int arr[], int n){
    node * head= new node();
    head->data=arr[0];
    node * neww= new node();
    neww->data=arr[1];
    head->next=neww;
    for (int i = 2; i < n; i++)
    {
        neww->next=new node();
        neww=neww->next;
        neww->data=arr[i];   
    }
    cout<<head->data<<endl;
    return head;
    

}
void read(node * head){
    node * point= head;
    while (point!=nullptr)
    {
        cout<<"The data is:"<<point->data<<endl;
        point=point->next;
    }
    
}

int main(){
    int n=5;
    int arr[n]={1,2,3,4,5};
    node * head=insert(arr,n);
    read(head);

    return 0;
}