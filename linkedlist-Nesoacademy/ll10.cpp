#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * next;
    node(){
        data=0;
        next=nullptr;
    }
};

int read(node * head){
    int counnt=0;
    node * pnt = nullptr;
    pnt=head;
    while (pnt!=nullptr)
    {    
        cout<<pnt->data<<endl;
        pnt=pnt->next;
        counnt++;
    }
    cout<<"function run"<<endl;
    return counnt;
    
}
void middle(node * head,int datta,int position){
    
    node * pointer= head;
    node * neww= new node();
    neww->data=datta;

    int cnt=1;
    while (cnt!=position)
    {   
        
        pointer=pointer->next;
        cnt+=1;
        
        
    }
    
   
    neww->next=pointer->next;//here we are connecting  new pointer and address of next pointer when it will come in middle
    pointer->next=neww;//here we are giving old pointer address of new pointer
   // return neww;
    
   

    
}
int main(){
    node * head= new node();
    head->data=1;
    // second
    node* current= new node();
    current->data=2;
    head->next=current;
    //updating same pointer
    current->next=new node();
    current=current->next;
    current->data=3;
    read(head);
    //enter position
    
    middle(head,5,1);


    read(head);

    return 0;
}