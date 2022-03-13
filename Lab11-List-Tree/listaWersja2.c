#include <stdio.h>
#include <math.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head = NULL;
struct Node *current = NULL;

void print()
{
    struct Node *ptr = head;

    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
void insert(int data)
{
    struct Node *link = (struct Node *)malloc(sizeof(struct Node));

    link->data = data;
    link->next = head;
    head = link;
}
int main()
{

    insert(10);
    print();
    return 0;
}