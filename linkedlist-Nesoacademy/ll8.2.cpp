//now we adding element directly at the end without traversing to reduce time complexcity
// for this we are creating linked list from scrach
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(){
        data=0;
        next=nullptr;
    }
};
void read(node * head){
    node * pntr= head;
    while (pntr!=nullptr)
    {
        cout<<pntr->data<<endl;
        pntr=pntr->next;
    }
    

}
node * updating(node * next1, int data ){
    
    node * current = new node();
    current->data=data;
    current->next=nullptr;
    next1->next=current;
    return current;

}
int main(){
    node * head= new node();
    head->data=1;
    node * next1= new node();
    next1->data=2;
    head->next= next1;
    next1=updating(next1,5);
    next1=updating(next1,6);
    next1=updating(next1,7);
    next1=updating(next1,8);

    read(head);


    return 0;
}