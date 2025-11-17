#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        data = 0;
        next = nullptr;
    }
};
//now we are counting or traveling in ll
void count(Node* head){
    int count=0;
    if(head==nullptr){
        cout<<"empty"<<endl;
    }
    Node * pointer=nullptr;
    pointer=head;
    
    while (pointer!=nullptr)
    {
        count++;
        pointer=pointer->next;
        //cout<<pointer->data<<endl;
    }
    cout<<count<<endl;
    

}

int main()
{
    Node * head = new Node();
    head->data=25;
    //next node;
    Node * current = new Node();
    current->data=24;
    head->next=current;
    //using same pointer;
    current = new Node();
    current->data=33;
    //
    
    (head->next)->next=current;
    //cout<<head->next->next->data<<endl;
    count(head);


    return 0;
}