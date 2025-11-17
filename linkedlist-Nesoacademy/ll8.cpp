#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node * next;
    node(){
        data=0;
        next=nullptr;
    }
};

void add_data(node * head,int data){
    node * pntr=head;
    node * neww=new node();
    neww->data=data;
    neww->next=nullptr;
    while (pntr->next!=nullptr)
    {
        pntr=pntr->next;
    }
    pntr->next=neww;
    
}
void read_data(node * head){
    node * pntr=head;
    while (pntr!=nullptr)
    {
        cout<<"the data is:"<<pntr->data<<endl;
        pntr=pntr->next;
    }
    
}
int main()
{   
    node * head= new node();
    head->data=1;
    //endpoint
    node * end = new node();
    end->data=9;
    head->next=end;
    add_data(head,2);
    read_data(head);
    return 0;
}