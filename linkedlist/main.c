#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct node{
    int info;
    struct node *next;
}Node;

typedef struct{
    int nelements;
    Node *head; // begin of list
    Node *tail; // end of list
}List;

List *new_list(void)
{
    List *l = (List*) malloc(sizeof(List));
    l->head = NULL;
    l->nelements = 0;
    return l;
}

void insert_inbegin(List *l, int element)
{

    Node *new = (Node*) malloc(sizeof(Node));
    new->info = element;

    if (l->head == NULL) 
    {    
        new->next = NULL;
        l->head = new;
        l->tail = new;
    }
    else 
    {
        new->next = l->head;
        l->head = new;
    }

    l->nelements++;
}

void insert_inend(List *l, int element)
{
    Node *new = (Node*) malloc(sizeof(Node));
    new->info = element;

    if (l->head == NULL) 
    {    
        new->next = NULL;
        l->head = new;
        l->tail = new;
    }
    else
    {
        new->next = NULL;
        l->tail->next = new;
        l->tail = new;
    }

    l->nelements++;
}

void remove_oneelement(List *l, int element)
{
    int r = 0;

    if (l->head->info == element) // remove in begin
    {
        Node *aux = l->head;
        l->head = aux->next;
        free(aux); r++;
    }
    else
    {
        Node *p = l->head; 
        Node *prev = NULL;
    
        while (p != NULL && r != 1)
        {
            if (p->info == element)
            {
                if (p->next == NULL) // remove in end of list
                {
                    free(p);
                    prev->next = NULL;
                    l->tail = prev; 
                }
                else // remove in middle of list
                {
                    prev->next = p->next;
                    free(p); 
                }
                r++;
                break;
            }
            prev = p;
            p = p->next;
        }
    }
    if (r == 1)
    {
        printf("Element deleted with sucess!\n");
        l->nelements--;
    }
    else printf("Element not found!\n");
    
}

void print(List *l)
{
    Node *p;

    if (l->nelements == 0)
    {
        printf("The List is empty\n");
        return;
    }
    
    for (p = l->head; p != NULL; p = p->next)
         printf("%d\n", p->info);

}
int main()
{
    List *list = new_list();

    insert_inbegin(list, 1);
    insert_inbegin(list, 0);
    insert_inbegin(list, -1);
    insert_inend(list, 2);
    insert_inend(list, 3);
    print(list);
    printf("Length: %d\n", list->nelements);
    remove_oneelement(list, -1);
    print(list);
    printf("Length: %d\n", list->nelements);
    remove_oneelement(list, 1);
    print(list);
    printf("Length: %d\n", list->nelements);
    remove_oneelement(list, 1);
    print(list);
    printf("Length: %d\n", list->nelements);
    remove_oneelement(list, 3);
    print(list);
    printf("Length: %d\n", list->nelements);
    remove_oneelement(list, 0);
    print(list);
    remove_oneelement(list, 2);
    print(list);

    return 0;
} 
