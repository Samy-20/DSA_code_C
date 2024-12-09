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
        printf("Element:\t%d\n", ptr->data);
        ptr = ptr -> next;
    }
    
}

int insertionIndex(struct node * head, int index, int element){

    int i;
    while (i=index-1)
    {
        struct node * ptr = (struct node *)malloc(sizeof(struct node));
        i->next = 
    }
    
}

int main(){
    struct node * head;
    struct node * second;
    struct node * third;
    struct node * fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 10;
    head->next = second;

    second->data = 20;
    second->next = third;

    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;


    traversal(head);
    int insert = insertionIndex(head, 3, 50);
    return 0;
}
