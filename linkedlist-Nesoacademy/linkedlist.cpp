//single linked list=navigation is forward only
//doubly linked list=forward and backwward
//circular= last node is connected to first
/*
A single linked list is consists of 2 parts= data and link
*/
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int number;
    Node *Next;//basically this is self referantial struture is pointing towards same type
    
    //basically this is parametrized construtor no need 
    Node(int n, Node*Next ){
        number=n;
        Next=Next;

    }
    //we are creating another constructor in case user does not passed the next adress so it should be null
    Node(int n){
        number=n;
        Next=nullptr;
    }
    Node(){
        number=0;
        Next=nullptr;
    }
};

int main(){
    /*
    Node sairaj;
    sairaj.number=5;
    cout<<sairaj.number<<endl;
    cout<<sairaj.Next;
    */
    //creating single head to understand program
    //now we are creating a pointer which access to both the entity
    //in class
    Node *pointer;
    pointer=new Node();
    //here we are allocating memory to New node name pointer;
    //now this pointer has accesed to both
    //the entity in class with the help arrow operator
    pointer->number=45;
    cout<<pointer->number<<endl;
    cout<<pointer->Next;
    //remeber that 
    



    

    

    return 0;
}