#include <stdio.h>
#include <stdlib.h>
#include <string.h>


#define MAX 50
/*
    JOSÉ AUGUSTO SILVA SANTOS
    Primeiro nome: José
    soma 32%3 =  resto 2
    Antepenultimo nome: Augusto
    soma 51%6 = resto 3
    
    3: infixa com chaves e colchetes
    
*/

typedef struct{
    int topo;
    char operandos[MAX]; 
}Pilhaoperando;

typedef struct{
    int topo;
    char operadores[MAX];
    
}Pilhaoperadores;

Pilhaoperando *cria_pilhaoperando(void)
{
    Pilhaoperando *p = (Pilhaoperando*) malloc(sizeof(Pilhaoperando));
    p->topo = -1;
    return p;
}

Pilhaoperadores *cria_pilhaoperandores(void)
{
    Pilhaoperadores *p = (Pilhaoperadores*) malloc(sizeof(Pilhaoperadores));
    p->topo = -1;
    return p;
}

int main()
{
    Pilhaoperando *pilhaoperando = cria_pilhaoperando();
    Pilhaoperadores *pilhaoperadores = cria_pilhaoperadores();
    
    return 0;
}
