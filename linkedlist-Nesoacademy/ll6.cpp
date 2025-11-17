//printing the data
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int roll_num;
    string name;
    node * next;
};
void printdata(node * head){
    node * pntr=head;
    while (pntr!=nullptr)
    {   
        cout<<pntr->name<<endl;
        cout<<pntr->roll_num<<endl;
        pntr=pntr->next;
        
    }
    

}
int main(){
    node * head= new node();
    head->name="sairaj";
    head->roll_num=1;
    //another pointer

    node * current= new node();
    current->name="vivek";
    current->roll_num=2;
    head->next=current;//head->next = current links node1 -> node2.
    //updating same pointer

    current->next=new node();
    //allocate node #3 and store its address in node2->next
    current=current->next;//basically current contain address of old current location
    //current->next told it that now we have new location
    current->name="sai";
    current->roll_num=21;
    current->next=nullptr;
    printdata(head);
    return 0;
}