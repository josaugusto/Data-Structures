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
    return q;
}

void insert()
{

}

void remove()
{

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
