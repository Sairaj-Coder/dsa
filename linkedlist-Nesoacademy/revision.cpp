#include<bits/stdc++.h>
using namespace std;
struct node{
    string data;
    node * next;
    node(){
        data='0';
        next=nullptr;
    }
};
void read(node * head){
    node * temp;
    temp=head;
    while(temp!=nullptr){
        cout<<temp->data<<endl;
        temp=temp->next;

    }
}
node * insert_end(node * current ,string value){
    node * pnt2=current;
    pnt2->next=new node();
    pnt2=pnt2->next;
    pnt2->data=value;
    return pnt2;


}
node * insert(node * head,string target,int postion){
    node * pnt1=head;
    node * pnt2=head;
    node * tar=new node();
    tar->data=target;
    int count=0;
    while (count!=(postion-2))
    {
        pnt1=pnt1->next;
        pnt2=pnt2->next;
        count++;
    }
    pnt2=pnt2->next;
    pnt1->next=tar;
    tar->next=pnt2;
    
    return head;

    

}
void search(node * head,string target){
    cout<<"Note 1 for true 0 for false \n";
    cout<<"Searching"<<endl;
    node * pnt=head;
    bool searched=false;
    while (pnt!=nullptr)
    {
        if(pnt->data==target){
            searched=true;
            break;
        }
        else{
            pnt=pnt->next;
        }
        

    }
    cout<<"search"<<endl;
    cout<<searched<<endl;
    
    

}
node * start(node * head, string data){
    node * first= new node();
    first->data=data;
    first->next=head;
    return first;

}
node * delet(node * head,string data,int position){
    
}

int main(){
    node * head= new node();
    head->data="king";
    node * current= new node();
    current->data="hello";
    head->next=current;
    
    string arr[5]={"sai","mayur","sanchita","mauri","durga"};
    for (int i = 0; i < 5; i++)
    {
        current=insert_end(current,arr[i]);
    }
    
    //search(head,"mayur");
    //search(head,"mayu");
    //head=start(head,"Good");
    //read(head);
    insert(head,"welcome",5);
    read(head);
    return 0;
}