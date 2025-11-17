#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node()
    {
        data = 0;
        next = nullptr;
    }
};
int main()
{
    node* sairaj=new node();
    sairaj->data=1;
    //here we are not declaring address of first because we have already declared it in
    //default agrement as 0 we will update it in next to make it single linked list
    //node * akshay= new node();
    node *vivek= new node();
    vivek->data=2;
    sairaj->next=vivek;//now we have connected node 

    node *rohan= new node();
    rohan->data=3;
    vivek->next=rohan;

    cout<<"This is the first value:"<<((sairaj->next)->data);
    cout<<endl;
    cout<<"This is the first value:"<<((vivek->next)->data);
    //now basically sairaj->next==gives me address of vivek (sairaj->next)->next will gave me address of rohan
    //so i can access third member address and address print data
    //i.e=>
    cout<<endl;
    cout<<((sairaj->next)->next)->next<<":";
    cout<<"Since this is rohan address now which is zero because it does not have any next member"<<endl;
    cout<<(sairaj->next->next)->data;
    cout<<":this rohan data"<<endl;
    //now everytime when we create new node memory is allocated to reduce this memory allocation linked list was introduce
    //loook for method third

}