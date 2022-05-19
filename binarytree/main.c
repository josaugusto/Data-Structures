#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *left;
    struct node *right; 

}Node;

typedef struct 
{
    Node *root;
}Tree;

Node *new_node(int value)
{
    Node *new = (Node*) malloc(sizeof(Node));
    new->info = value;
    new->left = NULL;   
    new->right = NULL;
    return new;
};

void insert_right(Node *no, int value);

void insert_left(Node *no, int value)
{
    if (no->left == NULL)
        no->left = new_node(value);
    else
    {
        if (value < no->left->info) insert_left(no->left, value);
        else if (value > no->left->info) insert_right(no->right, value);
    } 
}

void insert_right(Node *no, int value)
{
    if (no->right == NULL)
        no->right = new_node(value);
    else
    {
       if (value < no->right->info) insert_left(no->left, value);
       else if (value > no->right->info) insert_right(no->right, value); 
    } 
}

void insert(Tree *t, int value)
{
    if (t->root == NULL)
        t->root = new_node(value);
    else
    {
        if (value < t->root->info) insert_left(t->root, value);
        else if (value > t->root->info) insert_right(t->root, value);
    }
}

int search(Node *root, int value)
{
        if (root == NULL) return 0;
        else if (value == root->info) return 1;
        else
        {
            if (value < root->info) return search(root->left, value);
            else return search(root->right, value);
        }
}

int main()
{
    Tree *tree = (Tree*) malloc(sizeof(tree));
    tree->root = NULL;

    insert(tree, 1);
    insert(tree, 2);
    insert(tree, 3);
    insert(tree, 4);
    insert(tree, 5);
    insert(tree, 6);
    insert(tree, 7);
    printf("%d\n", search(tree->root, 2));
    return 0;
}
