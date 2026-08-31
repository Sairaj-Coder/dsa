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
node * insert(node * head,int data){
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
void read(node * head){
    if(!head){
        return;
    }
    read(head->left);
    cout<<head->data<<",";
    read(head->right);

}
int search(node * head,int target){
    if(!head){
        return 0; 
    }
    if(head->data==target){
        return 1;
    }
    if(head->data > target){
        return search(head->left,target);
    }
    else{
        return search(head->right,target);
    }


}
int main(){
    int n=7;
    int arr[n]={4,3,2,9,1,7,0};
    node * head=nullptr;
    for (int i = 0; i < n; i++)
    {
        head=insert(head,arr[i]);
    }
    read(head);
    cout<<endl;

    cout<<"searching:"<<search(head,6);
    cout<<"searching:"<<search(head,7);
    

    return 0;
}