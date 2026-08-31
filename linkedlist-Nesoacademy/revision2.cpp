#include<bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node * next;
};
//this will add data serialy at the end
node * add(node * current,int value){
    node * pnt= current;
    pnt->next=new node();
    pnt=pnt->next;
    pnt->data=value;
    return pnt; 

}
node * newhead(node * head,int value){
    node * pnt=new node();
    node * temp=head;
    pnt->data=value;
    pnt->next=temp;
    return pnt;

}
node * insertanywhere(node * head,int value,int position){
    if(position==0){
        return head=newhead(head,value);
    }
    node * pntr=head;
    node * middle=new node();
    middle->data=value;
    int count=1;
    while (count!=position)
    {   
        pntr=pntr->next;
        count++;
    }
    middle->next=pntr->next;
    pntr->next=middle;
    return head;
}
void read(node * head){
    node * pnt = head;
    
    while(pnt!=nullptr){
        cout<<pnt->data<<",";
        pnt=pnt->next;
    }
}
node * arr(int arr[],node * head){
    
    if(head==nullptr){
        node * temp= new node();
        temp->data=arr[0];
        return temp;
    }

}
void read_recursion(node * head){
    node * pntr=head;
    if(pntr->next==nullptr){
        cout<<pntr->data;
        return ;
    }
    cout<<pntr->data<<",";
    read_recursion(pntr->next);
    return;
}
int main(){
    node * head=new node();

    head->data=1;
    
    node * current = new node();
    current->data=2;
    
    head->next=current;
    current=add(current,3);
    head=newhead(head,0);
    read_recursion(head);
    // 
    // 
    // 
    
    // 
    
    // 

    // 
    // read(head);
    // //cout<<head->data<<endl;

    return 0;
}