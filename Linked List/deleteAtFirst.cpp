#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void deleteFromFirst(Node *first){
    Node *cur;
    cur= first;
    first = cur->next;
    delete(cur);
}

void display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    Node *first = new Node(78);
    Node *second = new Node(56);
    Node *third = new Node(34);
    Node *forth = new Node(75);

    first->next = second;
    second->next = third;
    third->next = forth;
    forth->next = NULL;

    display(first);
    deleteFromFirst(first);
    display(first);
}