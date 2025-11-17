#include<bits/stdc++.h>
using namespace std;
//now we are going to link different element addressess to make them a list
class linked_list{
    public:
    int data;
    linked_list* next;
    linked_list(int data,linked_list * next){
        data=data;
        next=next;
    }
    linked_list(){
        data=0;
        next=nullptr;
    }
};
int main(){
    //one member 
    linked_list * first=new linked_list();
    first->data=45;
    first->next=nullptr;
    //another member
    linked_list * second=new linked_list();
    second->data=62;
    second->next=nullptr;//it still null we can add previous pointer address also
    //here we have connected first member and second member
    first->next=second;

    //printing
    cout<<(first->next)<<endl;//now here address is printed
    cout<<(first->next)->data<<endl;//now we are printing element


    


    
    return 0;
}