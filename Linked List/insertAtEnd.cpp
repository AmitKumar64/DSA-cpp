#include <iostream>
using namespace std;

// struct Node
// {
//     int data;
//     struct Node *next;
// };
// create a class
class Node
{
    // make public all the data member for this class so the it can be execesable out side of the class
public:
    // create a variable
    int data;
    // create a pointer
    Node *next;

    // constuter and insert a value val in data and in next ponter null
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
// create a function for inserting a value at the end of linklist

void insertAtEnd(Node *&first, int val)
{
    // struct Node *ptr;
    // ptr = (struct Node *)malloc(sizeof(struct Node));
    // ptr->data = data;

    // create a new node and insert a val
    Node *ptr = new Node(val);

    // cheak head is nulll
    if (first == NULL)
    {
        // update pointer
        first = ptr;
        return;
    }
    // create a new node
    Node *q = first;

    // condition cheak
    while (q->next != NULL)
    {

        q = q->next;
    }
    // insert at the end of list
    q->next = ptr;
    ptr->next=NULL;
}

// create a function for dispaly data
void display(Node *p)
{
    // create a new node
    Node *curr = p;

    // condition
    while (curr != NULL)
    {
        cout << curr->data << " ";
        curr = curr->next;
    }
}

int main()
{
    // struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    // first = NULL;
    // create a head node nad insert NULL in it
    Node *first = NULL;

    // function call
    insertAtEnd(first, 78);
    insertAtEnd(first, 70);
    // display function
    display(first);
    return 0;
}