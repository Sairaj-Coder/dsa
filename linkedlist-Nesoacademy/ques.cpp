// Online C++ compiler to run C++ program online
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
node * insert(int arr[],int n){
    node * head=new node();
    head->data=arr[0];
    node * pnt=new node();
    pnt->data=arr[1];
    head->next=pnt;
    for(int i=2;i<n;i++){
        pnt->next=new node();
        pnt=pnt->next;
        pnt->data=arr[i];
    }
    return head;
}
void read(node * head){
    node * pnt= head;
    
    while(pnt->next!=nullptr){
        cout<<pnt->data<<",";
        pnt=pnt->next;
    }
}


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int arr[n];
        cin>>n;
        node * head;
        head = insert(arr,n);
        read(head);
    }
    return 0;
}