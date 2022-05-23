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


Node *insert(Node *root, int value)
{
    if (root == NULL){
        Node *new = (Node*) malloc(sizeof(Node));
        new->info = value;
        new->left = NULL;   
        new->right = NULL;
        return new;
    }
    else
    {
        if (value < root->info) root->left = insert(root->left, value);
        if (value > root->info) root->right = insert(root->right, value);
        return root;
    }
}

int search(Node *root, int value)
{
    if (root == NULL) return 0;
    else if (value == root->info) return 1;
    else if (value < root->info) return search(root->left, value); 
    else return search(root->right, value);
}


// left - root - right
void show(Node *root)
{
    if (root != NULL)
    {
        show(root->left);
        printf("%d ", root->info);
        show(root->right);
    }
}

int remove(Node *root, int value)
{
    if (root == NULL)
    {
        printf("The tree was empty.");
        return 0; 
    }
    else
    {
        Node *prev;

        while(root != NULL)
        {
            if (value == root->info)
            {
                if (root->left == NULL && root->right == NULL) // remove leaf
                {
                    
                }
            }
            else if (value < root->info) remove(root->left, value);
            else if (value > root->info) remove(root->right, value);
        }
    }
}

int main()
{
    Tree *tree = (Tree*) malloc(sizeof(tree));
    tree->root = NULL;

    tree->root = insert(tree->root, 4);
    insert(tree->root, 2);
    insert(tree->root, 1);
    insert(tree->root, 3);
    insert(tree->root, 6);
    insert(tree->root, 5);
    insert(tree->root, 7);

    printf("R: %d\n", search(tree->root, 3));
    show(tree->root);
    printf("\n");
    return 0;
}
