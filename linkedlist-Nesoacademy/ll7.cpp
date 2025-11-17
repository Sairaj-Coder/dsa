//adding elemnts 
#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * next;
    node(){
        data=0;
        next=nullptr;
    }
};
void adding_element(node * head,int neww){  
    node * pntr, *temp;
    pntr=head;
    temp=new node();
    temp->data=neww;
    temp->next=nullptr;
    
    while (pntr->next!=nullptr)
    {
        pntr=pntr->next;
    }
    pntr->next=temp; 

}
void count(node * head){
    int cont=0;
    node *pontr=nullptr; 
    pontr=head;
    while (pontr!=nullptr)
    {   
        cont++;
        pontr=pontr->next;
    }
    cout<<"This is counter:"<<cont<<endl;
    

}
int main(){
    //creating head
    node * head= new node();
    head->data=1;
    //new node
    node *current= new node();
    current->data=2;
    head->next=current;

    //updating same pointer
    current->next= new node();
    current=current->next;
    current->data=3;
    //updating same pointer
    current->next=new node();
    current=current->next;
    current->data=4;
    //cout<<head->next->next->next->data<<endl;
    adding_element(head,5);//successfully added elemented
    count(head);
    
    return 0;
}