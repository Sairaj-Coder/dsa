#include<bits/stdc++.h>
using namespace std;
//declaring of ll
struct node{
    
    string name;
    node * next;

};
//travel from begin 2 end 
void travel(node * head){
    node * pnt= head;
    while (pnt!=nullptr)
    {
        cout<<pnt->name<<",";
        pnt=pnt->next;
    }
    
}
//insert
node * insert (node * head, string x){
    node * pnt= new node();
    pnt->name=x;
    pnt->next=head;
    return pnt;

}

using namespace std;
int main(){
    node * std1= new node();
    std1->name="sairaj";
    
    
    node * std2= new node();
    std2->name="sam";
    
    std1->next=std2;
    
    node * std3= new node();
    std3->name="mayur";

    std2->next=std3;

    node * head=insert(std1,"shreya");

    travel(head);
   // cout<<std1->next->next->name<<endl;
    return 0;
}