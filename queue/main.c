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
    return q;
}

void inserir(Queue *q, int value)
{
    if (q->begin == NULL) printf("This queue was empty.");
    else
    {
        Node *new = newNode(value);
        q->begin
    }
}

void remover(Queue *q)
{
    if (q->begin == NULL) printf("This queue was empty.");
}

void showQueue(Queue *q)
{
    if (q->begin == NULL)
    {
        printf("This queue was empty.");
        return;
    }
    else
    {
          
    }
}

int main()
{
    Queue *queue = newQueue();
    
}
