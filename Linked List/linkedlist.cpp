#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
    int data;
    struct Node *link;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->link = NULL;
    last = first;

    for (int i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
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
    int A[] = {12, 45, 67, 2, 4, 6, 13, 34};
    int size = 8;
    create(A, size);
    display(first);
}
