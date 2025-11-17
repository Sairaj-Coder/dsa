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
void read(node * head){
    node * pntr= head;
    while (pntr!=nullptr)
    {
        cout<<"The element is:"<<pntr->data<<endl;
        cout<<"The element is:"<<pntr->address<<endl;
        pntr=pntr->address;
    }
    
}
node* add_at_begining(node * head, int data){// if we does not want to return anything and want to use void then 
    //original address should be passed 
    node * first= new node();
    first->data=data;
    first->address=head;
    
    return first;//here we have return first because head is now updated by first
    


}
int main(){
    node* head= new node();
    head->data=1;
    //2nd
    node * current = new node();
    current->data=2;
    head->address=current;
    //now adding element to the first;
    head = add_at_begining(head,3);//updating head;--->passed by value
    head = add_at_begining(head,4);//updating head;->passed by refernce(head &,4)
    head = add_at_begining(head,5);//updating head;->pointer to pointer void(node** head)
    head = add_at_begining(head,6);//updating head;-->lecture 13
    read(head);

    

    return 0;
}