#include <stdio.h>
#include <stdlib.h>

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
        return 1;
    }
    else insert_left(root->left, value);

    return 0;
}

int insert_right(Node *root, int value)
{
    if (root->right == NULL)
    {
        root->right = new_node(value);
        return 1;
    }else insert_right(root->right, value);

    return 0;
}

void show_tree(Node *root)
{
        
}

int main()
{
    Node *root = new_node(1); 

    insert_left(root, 2);
    insert_right(root, 3);
    insert_left(root, 2);
    insert_right(root, 3);

    return 0;
}
