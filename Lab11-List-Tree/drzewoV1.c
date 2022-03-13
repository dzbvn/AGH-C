#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *left;
    struct node *right;
};
struct node *createNode(int data)
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = data;
    tmp->left = NULL;
    tmp->right = NULL;
    return tmp;
}

struct node *insert(struct node *node, int data)
{
    if (node == NULL)
    {
        return createNode(data);
    }
    if (data < node->data)
    {
        node->left = insert(node->left, data);
    }
    else if (data > node->data)
    {
        node->right = insert(node->right, data);
    }
    return node;
}

void printTree(struct node *node)
{

    printf("%d\n", node->data);
}
int main()
{

    struct node *root = NULL;
    root = insert(root, 10);
    insert(root, 30);
    printTree(root);

    return 0;
}