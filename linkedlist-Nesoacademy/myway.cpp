#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
};
void count(node * head){
    int cont=0;
    if(head==nullptr){
        cout<<"Empty"<<endl;
    }
    node * pntr=nullptr;
    pntr=head;
    while (pntr!=nullptr)
    {
        cont++;
        pntr=pntr->next;
    }
    cout<<cont<<endl;
    

}
int main()
{   
    node * head=new node();
    head->data=1;
    //
    node * current = new node();
    current->data=2;
    head->next=current;//current is stored

// updating pointer
    current->next=new node();
    current=current->next;//old current storing address of new current i.e updating pointer
    current->data=3;
//updating again
    current->next=new node();
    current=current->next;
    current->data=4;
//counting element
    //cout<<head->next->next->next->data;
    count(head);

    return 0;
}