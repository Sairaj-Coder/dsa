#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    string name;
    node* next;
    node(){
        name="0";
        next=nullptr;
    }
};
void counting(node * head){
    node * pntr= nullptr;
    pntr=head;
    int count=0;
    while (pntr!=nullptr)
    {   
        count++;
        pntr=pntr->next;

    }
    cout<<"Total elements are:"<<count<<endl;
}
void adding_element(node * head, string data){
    node * pntr=nullptr;
    pntr=head;
    node * temp= new node();
    temp->name=data;
    temp->next=nullptr;
    while (pntr->next!=nullptr)
    {
        pntr=pntr->next;
    }
    pntr->next=temp;
    
}
void printing_element(node * head){
    node * pointer=head;
    while (pointer!=nullptr)
    {
        cout<<"the data is:"<<pointer->name<<endl;
        pointer=pointer->next;
    }
    

}
int main(){
    node * head= new node();
    head->name="sairaj";
    //creting second pointer
    node * current= new node();
    current->name="sai";
    head->next=current;
    counting(head);
    adding_element(head,"raj");
    printing_element(head);

}