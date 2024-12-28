#include <stdio.h>
#include <stdlib.h>

struct node                                   
{
    int data;
    struct node *next;
};

void traversal(struct node * head){
    struct node * ptr = head;
    while (ptr!=head)
    {       
        printf("Element is %d\n", ptr->data);
        ptr = ptr -> next;
    }
    
}

struct node * insertion(struct node * head){
    struct node * p = head;
    head = head -> next;
    return(p);
}

int main()
{
    struct node *head;
    struct node *first;
    struct node *second;
    struct node *third;

    head = (struct node *)malloc(sizeof(struct node));
    first = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));

    head->data = 20;
    head->next = first;

    first->data = 43;
    first->next = second;

    second->data = 50;
    second->next = third;

    third->data = 30;
    third->next = head;

    traversal(head);
    head = insertion(head);
    printf("\nafter the insertion linklist is\n");
    traversal(head);
    return 0;
}