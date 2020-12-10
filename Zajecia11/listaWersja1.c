struct Node{
    int data;
    struct Node* next;
};

void printList(struct Node * n){
    while(n != NULL){
        printf("%d\n", n->data);
        n = n->next;
    }
}
struct Node* add(struct Node * n, int d){
    struct Node* m;
    m = (struct Node*)malloc(sizeof(struct Node));
    m -> data = d;
    m -> next = NULL;

    while(1 > 0){
        if(n != NULL){
            n = n->next;
        }
        else{
            n->next = m;
            break;
        }
    }
    return m;
}

int main(){

    struct Node* first = NULL;
    struct Node* second = NULL;
    struct Node* third = NULL;

    first = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    first->data = 23;
    first->next = second;

    second->data = 12;
    second->next = third;

    third->data = 46;
    third->next = NULL;

    printList(first);
    struct Node* fourth = add(first, 22);
    printList(first);