#include<stdio.h>
#include<stdlib.h>


struct node
{
    int data;
    struct node * prev;
    struct node * next;
};

void traversal(struct node * n1){
    struct node * p = n1;
    while (p != NULL)
    {
        printf("Element is %d\n", p->data);
        p = p -> next;
    }
}

struct node * insertionAtfirst(struct node * n1, int data){
    struct node * ptr = (struct node *)malloc(sizeof(struct node));
    ptr -> next = n1 -> prev;
    ptr -> prev = NULL;
    ptr -> data = data;
    ptr = n1;
    return ptr;
}

int main(){
    struct node * n1 = (struct node *)malloc(sizeof(struct node));
    struct node * n2 = (struct node *)malloc(sizeof(struct node));
    struct node * n3 = (struct node *)malloc(sizeof(struct node));
    struct node * n4 = (struct node *)malloc(sizeof(struct node));

    n1 -> prev = NULL;
    n1 -> data = 23;
    n1 -> next = n2;

    n2 -> prev = n1;
    n2 -> data = 34;
    n2 -> next = n3;

    n3 -> prev = n2;
    n3 -> data = 56;
    n3 -> next = n4;

    n4 -> prev = n3;
    n4 -> data = 52;
    n4 -> next = NULL;

    traversal(n1);
    n1 = insertionAtfirst(n1, 21);
    printf("After insertion link list is\n");
    traversal(n1);
    return 0;
}
