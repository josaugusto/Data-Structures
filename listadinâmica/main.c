#include <stdio.h>
#include <stdlib.h>

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
      Aluno *p = (Aluno*) malloc(sizeof(Aluno));
        p = l->head;
        while(p->prox != NULL) p = p->prox;
        
        Aluno *novo = (Aluno*) malloc(sizeof(Aluno));
        strcpy(novo->nome, nome);
        novo->prioridade = prioridade;
        l->nalunos++;
        p->prox = novo;
}
int main()
{
    
    

    return 0;
} 
