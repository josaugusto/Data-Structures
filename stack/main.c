#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int info;
    struct node *next;
}Node;

typedef struct
{
    int topo;
    Node *firstin;
}Stack;

Stack *newStack()
{
    Stack *s = (Stack*) malloc(sizeof(Stack));
    s->topo = -1;
    s->firstin = NULL;
    return s;
}

Node *newNode(int value)
{
    Node *node = (Node*) malloc(sizeof(Node));
    node->info = value;
    node->next = NULL;
    return node;
}

void push(Stack *s, int value)
{
    if (s->firstin == NULL) s->firstin = newNode(value);
    else
    {
        Node *p = s->firstin;
        while(p != NULL)
            p = p->next;
        p->next = newNode(value);
        s->topo++;
    }
}

void pop(Stack *s, int value)
{
    Node *p = s->firstin;

}

void showStack(Stack *s)
{
    Node *p = s->firstin;

    while(p != NULL)
    {
        printf("%d", p->info);
        p = p->next;
    }

}

int main()
{
    Stack *stack = newStack();

    push(stack, 4);
    //push(stack, 5);
    //push(stack, 7);
    showStack(stack);

    return 0;
}
