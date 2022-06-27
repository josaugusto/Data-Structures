#include <stdio.h>
#include <stdlib.h>


typedef struct Node
{
    int info;
    struct Node *next;
}Node;

typedef struct queue
{
    int n;
    Node *begin;
    Node *end;

}Queue;

Node *newNode(int value)
{
    Node *node = (Node*) malloc(sizeof(Node));
    node->info = value;
    node->next = NULL;
    return node;
}

Queue *newQueue()
{
    Queue *q = (Queue*) malloc(sizeof(Queue));
    q->begin = NULL;
    q->end = NULL;
    q->n = -1;
    return q;
}

void insert(Queue *q, int value)
{

    Node *new = (Node*) malloc(sizeof(Node));
    new->info = value;

    if (q->begin == NULL) 
    {    
        new->next = NULL;
        q->begin = new;
        q->end = new;
    }
    else
    {
        new->next == NULL;
        q->end->next = new;
        q->end = new;
    }
    q->n++;
}

void delete(Queue *q)
{
    if (q->begin == NULL) printf("This queue was empty.\n");
    else
    {
        Node *aux = q->begin->next;
        free(q->begin);
        q->begin = aux;
    }      
}

void showQueue(Queue *q)
{
    if (q->begin == NULL) printf("This queue was empty.\n");
    else
    {
        for (Node *p = q->begin; p != NULL; p = p->next) printf("%d\n", p->info);
    }
}

int main()
{
    Queue *queue = newQueue();
    return 0;
}
