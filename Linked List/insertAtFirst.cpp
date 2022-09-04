#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        next = NULL;
        data = val;
    }
};

Node *insertAtFirst(Node *first, int data)
{
    // struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    // ptr->data = data;
    Node *ptr = new Node(data);
    ptr->next = first;
    first = ptr;
    return first;
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
}

int main()
{
    // struct Node *first = (struct Node *)malloc(sizeof(struct Node));
    // first = NULL;
    Node *first = NULL;

    first = insertAtFirst(first, 12);
    first = insertAtFirst(first, 18);
    first = insertAtFirst(first, 45);
    display(first);
    return 0;
}