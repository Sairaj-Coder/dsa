#include<bits/stdc++.h>
using namespace std;
class Node{

    int number;
    Node *Next;//basically this is self referantial struture is pointing towards same type
    public:
    //basically this is parametrized construtor no need 
    Node(int n, Node*Next ){
        number=n;
        Next=Next;

    }
    //we are creating another constructor in case user does not passed the next adress so it should be null
    Node(int n, Node * Next){
        number=n;
        Next=nullptr;
    }
};

int main(){
    int n=5;
    int ar[n]={7,8,8,9,4};
    

    

    return 0;
}