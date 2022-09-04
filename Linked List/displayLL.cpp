#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
}*first = NULL;

void linkedlist(int arr[], int size)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = arr[0];
    first->link = NULL;
    last = first;

    for (int i = 1; i < size; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = arr[i];
        t->link = NULL;
        last->link = t;
        last = t;
    }
}

void display(struct Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->link;
    }
}
int main()
{
    int arr[] = {45, 654, 23, 456, 23, 34, 23, 34, 56, 65, 23};
    linkedlist(arr, 11);
    display(first);
}