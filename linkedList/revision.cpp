#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
};
void read(node * head){
    node * pnt=head;
    if(pnt->next==nullptr){
        cout<<pnt->data;
        return;
    }
    cout<<pnt->data<<",";
    read(pnt->next);
    return;

}
//striver
node * conversion(int arr[],int n){
    node * head=new node();
    head->data=arr[0];
    node * mover= head;

    for (int i = 1; i < n ; i++)
    {
        node * temp = new node();
        temp->data=arr[i];
        mover->next=temp;
        mover=temp;


    }
    return head;   
}
//deletion of head
node * delete_head (node * head){
    //here we have to just lose the address
    node * temp=head->next;
    delete head;
    //free(head);
    return temp ;
}
node * delete_tail(node * head){
    node * pntr=head;

    while (pntr->next->next!=nullptr)
    {
        pntr=pntr->next;
        
    }
    
    delete pntr->next;

    pntr->next=nullptr;
    return head;
}





node * linkedlisttoarray(int arr[],int n){
    node * head= new node();
    head->data=arr[0];

    node * current= new node();
    current->data=arr[1];
    head->next=current;

    for (int i = 2; i < n; i++)
    {
        current->next=new node();
        current=current->next;
        current->data=arr[i];
    }
    return head;
    
}
int main(){
    int n=7;
    int arr[n]={6,5,3,2,4,5,4};
    node * head;
    head=linkedlisttoarray(arr,n);
    //cout<<head->data<<endl;
    //head=delete_head(head);
    //cout<<head->data<<endl;
    head=delete_tail(head);
    
    read(head);

    return 0;

}