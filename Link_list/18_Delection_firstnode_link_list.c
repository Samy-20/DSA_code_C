#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

void traversal(struct node * ptr){
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr -> next;
    }
    
}

struct node * deleteatHead(struct node * head){
    printf("After delection:\n");
    // struct node * ptr = (struct node *)malloc(sizeof(struct node));
    struct node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}

int main(){
    struct node * head;
    struct node * first;
    struct node * second;
    struct node * third;
    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head -> data = 20;
    head -> next = first;

    first -> data = 43;
    first -> next = second;

    second -> data = 50;
    second -> next = third;

    third -> data = 30;
    third -> next = NULL;
    
    traversal(head);
    head = deleteatHead(head);
    traversal(head);
    return 0;
}