#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(){
        data=0;
        left=nullptr;
        right=nullptr;
    }
    node(int value){
        data=value;
        left=nullptr;
        right=nullptr;

    }

};
node * insert(node * head, int data){
    if(!head){
        node * temp= new node(data);
        return temp;
    }
    if(head->data>data){
        head->left=insert(head->left,data);
    }
    else{
        head->right=insert(head->right,data);

    }
    
    
    return head;

}
int main(){
    int n=5;
    int arr[n]={2,3,4,1,5};
    node * head=nullptr;
    for (int i = 0; i < n; i++)
    {
        head=insert(head,arr[i]);
    }
    
    
    
    return 0;
}