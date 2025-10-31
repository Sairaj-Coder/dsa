/*
linked list=1)create
2)Traverse
3)search 4)Insert 5)Delete 6)sort 7)concatenate

*/

#include <bits/stdc++.h>
using namespace std;
// declaring data struture
class Node
{
public:
    int data;
    Node *Next;

public:
    Node(int data1, Node *next1)
    {
        data = data1;
        Next = next1; // here we can directly put null pointer also
    }

public:
    Node(int data1)
    {
        data = data1;
        Next = nullptr;
    }
};

Node *arratolinkedlist(vector<int> &arr)
{
    Node *head = new Node(arr[0]);
    Node *mover = head;
    for (int i = 1; i < arr.size(); i++)
    {
        Node *temp = new Node(arr[i]);
        mover->Next = temp;
        mover = temp;
    }
    return head;
}
// intializing

// length
void length_ll(Node *head);

int main()
{
    vector<int> x = {12, 2, 3, 7};
    // Node *u= new Node(x[1]);
    // cout<<u->data<<endl;
    Node *head = arratolinkedlist(x);
    cout << head->data << endl;
    // travelling in linked list
/*
    Node *temp = head;
    while (temp)
    {
        cout << temp->data << ",";
        temp = temp->Next;
    }
    cout << endl;

    // total element
    length_ll(head);
*/
    /*
    Node* y=new Node(x[1],nullptr);
    cout<<y->data<<endl;
    cout<<y->Next<<endl;
    */
    return 0;
}
void length_ll(Node *head)
{
    int cnt = 0;
    Node *temp = head;
    while (temp)
    {
        temp = temp->Next;
        cnt++;
    }
    cout << "Total elements is Linked list is:" << cnt;
}
// how to traverse through array

