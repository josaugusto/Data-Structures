#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct node
{
    int info;
    struct node *left;
    struct node *right; 

}Node;


Node *new_node(int value)
{
    Node *new = (Node*) malloc(sizeof(Node));
    new->info = value;
    new->left = NULL;
    new->right = NULL;
    return new;
};

int insert_left(Node *root, int value)
{
    if (root->left == NULL)
    {
        root->left = new_node(value);
        root->left->info = value;
        root->left->left = NULL; root->left->right = NULL;
        return 1;
    }
    else return insert_left(root->left, value);

    return 0;
}

int insert_right(Node *root, int value)
{
    if (root->right == NULL)
    {
        root->right = new_node(value);
        root->right->info = value;
        root->right->right = NULL; root->right->left = NULL;
        return 1;
    }
    else return insert_left(root->right, value);
    
    return 0;
}

/*
void print(Node *root)
{
    if (root->left == NULL && root->right == NULL)
    {
        printf("%d\n", root->info);
        return;
    }
    
}
*/

int main()
{

    Node *root = new_node(1); 

    insert_left(root, 2); 
    insert_right(root, 3);
    insert_left(root, 4); 
    insert_right(root, 5);
    insert_left(root, 6); 
    insert_right(root, 7);

    printf("%d\n", root->info); // sure
    printf("%d\n", root->left->info); // sure
    printf("%d\n", root->right->info); // sure
    printf("%d\n", root->left->left->info); // sure
    printf("%d\n", root->left->right->info);


    return 0;
}
