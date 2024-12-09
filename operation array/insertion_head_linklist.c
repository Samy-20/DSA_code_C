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
        printf("Element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}

struct node * insertAtfirst(struct node * head, int data){
    // printf("Enter element to insert in linklist:\t");
    // scanf("%d", &data);
    // struct node * head;
    struct node * ptr = (struct node *)malloc(sizeof(struct node));//create a dynamic menory fror element want to add in top of link list
    ptr -> next = head;//top of element next is pointing to head 
    ptr -> data = data;// data is also update with element which has been added
    return ptr;// ptr is return at end
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
    printf("\n");
    head = insertAtfirst(head, 43);
    traversal(head);
    return 0;
}