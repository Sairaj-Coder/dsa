#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * address;
    node(){
        data=0;
        address=nullptr;
    }
};
void read_data(node * head){
    node * pntr= nullptr;
    pntr=head;
    while (head!=nullptr)
    {   
        cout<<"This is data at:"<<pntr->data<<endl;
        pntr=pntr->address;
    }
    

}
node * adding_at_end(node * head,int value){
    node * pntr= head;
    node * vari= new node();
    vari->data=value;
    vari->address=nullptr;

    while(pntr->address!=nullptr){
        pntr=pntr->address;
    }
    pntr->address=vari;
    return vari;


}
node * begining(node * head,int dat){
    node * pnt= head;
    node * first = new node();
    first->data=dat;
    first->address=pnt;
    return first;

}

int main(){
    node * head = new node();
    head->data=1;
    node * current = new node();
    current->data=2;
    head->address=current;
    head=begining(head,5);
    current=adding_at_end(head,4);
    read_data(head);


    return 0;
}