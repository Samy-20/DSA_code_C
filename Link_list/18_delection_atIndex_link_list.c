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

struct node * delection_atIndex(struct node * head, int index){
    printf("After the deletion of element at index in link list\n");
    struct node * p = head;
    struct node * q = head->next;
    
    for (int i = 0; i < index-1; i++)
    {
        p = p -> next;
        q = q -> next;
    }
    p -> next = q -> next;
    free(q);
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
    head = delection_atIndex(head, 2);
    traversal(head);
    return 0;
}