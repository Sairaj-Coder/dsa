#include<bits/stdc++.h>
using namespace std;
//in method 2 we requred only two pointer one is head and another is last pointer/current pointer

struct node{
    int data;
    node * next;
    // node(){
    //     data=0;
    //     next=nullptr;
    // }

};
int main(){
    //creating head
    node* head= new node();//allocating memory for head
    head->data=1;
    //address will be automatically zero with the help of construtor
    //creating another pointer which will update it address only
    node* current= new node();
    current->data=2;
    //now we are going to put this address into head to create link
    //basciall this is link between 2nd AND first
    head->next=current;
    //now we are going to update same pointer
    current= new node();
    current->data=3;
    //now we are going to link this with 2nd 
    (head->next)->next=current;//now here
    cout<<head->next->next->data<<endl;//now here is only data no address
    cout<<head->next->next<<endl;//now this has address of the last node
    cout<<current->data<<endl;
    cout<<current->next<<endl;//no address
    //this is three digit linked list
    return 0;
}