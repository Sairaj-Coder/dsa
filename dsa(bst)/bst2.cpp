#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node * left;
    node * right;
    node(int value){
        data=value;
        left=nullptr;
        right=nullptr;

    }
    
};
node * insert(node * head, int datta){
    if(!head){
        node * temp=new node(datta);
        return temp;
    }
    if(datta < head->data){
        
        head->left=insert(head->left,datta);
    }
    else{
        head->right=insert(head->right,datta);
        
    }

    return head;

}
//traverse
void inorder_traversal(node * head){
    if(!head){
        return;
    }
    inorder_traversal(head->left);
    cout<<head->data<<",";
    inorder_traversal(head->right);

}

int main(){
    int n=5;
    int arr[n]={5,2,3,1,4};
    node * head=nullptr;
    for (int i = 0; i < n; i++)
    {
        head=insert(head,arr[i]);
    }
    inorder_traversal(head);

    return 0;
}