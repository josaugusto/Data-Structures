#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int info;
    struct node left;
    struct node right; 

}Node;

typedef struct tree
{
    Node *root;
}Tree;

Tree *new_tree() 
{
    Tree *t = (Tree*) malloc(sizeof(Tree));
    t->root = NULL;
    return t;
}

void insert_node(Tree t, int value)
{
    
}

int main()
{
    Tree *tree = new_tree();


    return 0;
}