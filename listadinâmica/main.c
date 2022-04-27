#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int info;
    struct no *prox;
}No;

typedef struct{
    int nelementos;
    No *head;
}Lista;

Lista *cria_lista(void)
{
    Lista *l = (Lista*) malloc(sizeof(Lista));
    l->head = NULL;
    l->nelementos = 0;
    
}

void inserir_elemento(Lista *l, int elemento)
{
    if (l->nelementos == 0)
    {
        No *novo = (No*) malloc(sizeof(No));
        novo->info = elemento;
        novo->prox = NULL;
        l->head = novo;
        l->nelementos++;

    }
    else
    {
        No *novo = (No*) malloc(sizeof(No));
        novo->info = elemento;
        novo->prox;
        
    }
}

int main()
{
    Lista *lista = cria_lista();


    return 0;
}   
