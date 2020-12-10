#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<stdint.h>

typedef int_fast32_t T;

struct List{
    struct Node *first;
    struct Node *last;
    int size;

};

struct Node{
    struct Node *next;
    struct Node *previous;
    int data;
};
typedef struct List List;
typedef struct Node Node;
struct Node *head = NULL;

void insert(char value){
    struct Node* link = (struct Node*) malloc(sizeof(struct Node));

    link->data = value;
    link->previous = head;
    head = link;

}

List* constructorList(int data) {
    struct List *List = malloc(sizeof(struct List));

    List->first = malloc(sizeof(struct Node));
    List->last = NULL;
    List->first->data = data;
    List->first->next = NULL;
    List->first->previous = NULL;

    return List;
}

List* constructListN(size_t elements, int value){
    struct List *List = malloc(sizeof(struct List));
    Node *node = List->first = malloc(sizeof(struct Node));
    for(int i=1; i < elements; i++){
        node->data = value;
        node->next = malloc(sizeof(struct Node));
        node = node->next;
    }
    return List;
}

List* cloneList(List* l) {
    struct List *newList = constructListN(l->size, 0);
    //struct List *newList = malloc(sizeof(struct List));

    while(l->first != NULL){
        newList->first->next = l->first->next;
        newList->first->previous = l->first->previous;
        newList->first->data = l->first->data;

        l->first = l->first->next;
        newList->first = newList->first->next;

    }

    return newList;
}
void f(int a){
    printf("%d\n", a);
}
void for_each(List* l, void *f(int)){
    while(l->first != NULL){
        f(l->first->data);
        l->first = l->first->next;
    }
}
void pop_front(List* l){
    Node *tmp = l->first;

    tmp = tmp->next;
    free(tmp);
}

void pop_back(List* l){
    Node *tmp = l->last;
    tmp = tmp ->previous;
    free(tmp);
}

void push_front(List* l, T element){

}

void clear(List* l){
    Node *p = l->first;
    while(p != NULL){
        l->first = l->first->next;
        free(p);
        p = l->first;
    }
    l->first = NULL;
    l->last = NULL;
}



int main(){


    return 0;
}