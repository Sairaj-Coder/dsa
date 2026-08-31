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
        node * temp=new node(data);
        return temp;
    }
    if(data<head->data){
        head->left=insert(head->left,data);
    }
    else{
        head->right=insert(head->right,data);
    }
    return head;

}
int search(node * head,int target){
    if(!head){
        return 0;
    }
    if(head->data==target){
        return 1;
    }
    else if (head->data>target)
    {
        return search(head->left,target);
    }
    else{
    
    
        return search(head->right,target);
    }
    
}
void travel(node * head){
    if(!head){
        return;
    }
    travel(head->left);
    cout<<head->data<<",";
    travel(head->right);
    
    

}
int main(){
    int n;
    cout<<"enter size of an array"<<endl;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout<<"Enter firts element"<<i+1<<":";
        cin>>arr[i];
    }
    node * head=nullptr;
    for (int i = 0; i < n; i++)
    {   
        head=insert(head,arr[i]);
    }
    travel(head);
    int find;
    cout<<endl;
    cout<<"Enter elements to search";
    cin>>find;
    //node * searching= new node(find);
    cout<<"searching:"<<search(head,find);

    
    
    
    
    return 0;
}