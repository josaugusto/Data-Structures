#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 5

/*
Descrição:
    Pilhas em programação são estruturas de dados do tipo LIFO(last-in first-out). Uma pilha
    contém uma sequência de elementos do mesmo tipo, podendo ser feita com alocação
    estática ou dinamica.

Operações básicas:
    Criação;
    Destruição;
    Empilhar(push) -> inserção de um novo elemento no topo da pilha;
    Desempilhar(pop) -> remoção de elementos do topo da pilha;
    Consultar(top) -> Consultar o elemento do topo da pilha;
    verificação se pilha está vazia(EMPTY);
    imprimir(print) -> Mostrar a pilha.
*/


typedef struct {
    int topo;
    int dados[MAX];
    
}Pilha;


Pilha *cria_pilha()
{
    Pilha *pi;
    pi = (Pilha*) malloc(sizeof(Pilha));
    pi->topo = -1;
    return pi;
}

void destruir_pilha(Pilha *p)
{
    free(p);
}

int pilha_vazia(Pilha *p)
{
    if (p->topo == -1) return 1;
    else return 0;
}


void push(Pilha *p, int valor)
{
    if (p->topo+1 == MAX){
        printf("Erro! A pilha está cheia.\n");
        return;
    }
    p->dados[++p->topo] = valor;
}

void pop(Pilha *p)
{
    if (pilha_vazia(p)) printf("Erro! A pilha está vazia.\n");
    else p->topo--;
}

int tamanho_pilha(Pilha *p)
{
    return p->topo++;
}

int top(Pilha *p)
{
    if (pilha_vazia(p)) printf("Erro! A pilha está vazia.\n");
    else return p->dados[p->topo];
}

void print(Pilha *p)
{
    for (int i = 0; i < tamanho_pilha(p); i++) printf("%d ", p->dados[i]);
    printf("\n");
}

int main()
{
    Pilha *p = cria_pilha();
}
