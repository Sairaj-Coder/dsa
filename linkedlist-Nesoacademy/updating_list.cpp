#include <bits/stdc++.h>
using namespace std;
// now we are going to create node link between 5 member
struct node
{
    int data;
    node *link;
    node()
    {
        data = 0;
        link = nullptr;
    }
};
int main()
{
    // creating head
    node *head = new node();
    head->data = 1;
    head->link = nullptr; // null yet no address of next element
    // cout << head->data << endl;
    //  creating second node
    node *last = new node();
    last->data = 2;
    // joinig this 2 node
    head->link = last;

    // now creating new node
    // now we know last is linked to first but address of last is empty
    // now we are updating address of last and alocating memory to it
    last->link = new node();
/*
To add a new node at the end, you must:
1.Link the current last node to the new node.
2.Move the last pointer to become the new node.
3.Set the data for that new node.*/
    //basically we are using last to put address of last->new
    last=last->link;//basically we updating pointer
    last->data=25;

    //now we are using last new node address again
    last->link=new node();
    last=last->link;
    /*So, last stops pointing at Node 2 and starts pointing at Node 3. 
    This keeps your last pointer "up-to-date," 
    making it easy to add the next node (Node 4) to the end.
    */
    last->data=13;
    
    cout<<head->link->data<<endl;
    
    




    return 0;
}