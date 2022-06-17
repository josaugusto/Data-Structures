#include <stdio.h>
#include <stdlib.h>


typedef struct node 
{
    int info;
    struct node *next;
}Node;

typedef struct
{
    int n;
    Node *top;
}Stack;

Stack *newStack()
{
    Stack *s = (Stack*) malloc(sizeof(Stack));
    s->top = NULL;
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
    if (s->top == NULL) s->top = newNode(value);
    else
    {
        Node *new = newNode(value);
        new->next = s->top;
        s->top = new;
        s->n++;
    }
}

void pop(Stack *s)
{
    if (s->top == NULL) printf("This stack was empty.\n");
    else
    {
        Node *aux = s->top;
        s->top = aux->next;
        free(aux);
        s->n--;
    }
}

void showStack(Stack *s)
{
    if (s->top == NULL) printf("This stack was empty.\n");
    else
    {
        for (Node *p = s->top; p != NULL; p = p->next)
        {
            printf("%d", p->info);
            printf("\n");
        }
    }
}

int main()
{
    Stack *stack = newStack();

    push(stack, 2);
    //push(stack, 3);
    //push(stack, 4);
    //push(stack, 5);
    //showStack(stack);
    //pop(stack);
    showStack(stack);

    return 0;
}
