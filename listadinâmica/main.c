#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node{
    int info;
    struct node *next;
}Node;

typedef struct{
    int nelements;
    Node *head;
}List;

List *new_list(void)
{
    List *l = (List*) malloc(sizeof(List));
    l->head = NULL;
    l->nelements = 0;
}

void insert_firstelement(List *l, int element)
{
    Node *new = (Node*) malloc(sizeof(Node));
    new->info = element;
    new->next = NULL;
    l->head = new;
    l->nelements++;
}

void insert_inbegin(List *l, int element)
{
   Node *aux = (Node*) malloc(sizeof(Node));
   aux = l->head;
   Node *new = (Node*) malloc(sizeof(Node));
   new->info = element;
   new->next = aux;
   l->head = new;
   l->nelements++;
}

void insert_inend(List *l, int element)
{
    Node *p = (Node*) malloc(sizeof(Node));
    for (p = l->head; p != NULL; p = p->next);
        
    Node *new = (Node*) malloc(sizeof(Node));
    new->info = element;
    p->next = new;
    l->nelements++;
}

void print(List *l)
{
    Node *p = (Node*) malloc(sizeof(Node));
    
    for (p = l->head; p != NULL; p = p->next) printf("%d\n", p->info);
}
int main()
{
    List *list = new_list();
    
    if (list->nelements == 0)
    {
        insert_firstelement(list, 2);    
    }
    print(list);
    //insert_inbegin(list, 1);
    //print(list);
    insert_inend(list, 3);
    print(list);
    
    
    return 0;
} 
