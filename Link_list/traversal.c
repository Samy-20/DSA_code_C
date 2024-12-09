#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};

void traversal(struct node * ptr){
    while (ptr != NULL)
    {
        printf("element: %d\n", ptr->data);
        ptr = ptr->next;
    }
    
}

int main(){
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    //allocate memory for nodes in heap]
    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    //link list first and second node
    head->data = 7;
    head->next = second;

    //link list for second and third
    second->data = 8;
    second->next = third;

    //link list for third and first
    third->data = 30;
    third->next = fourth;

    fourth->data = 40;
    fourth->next = NULL;

    traversal(head); 
    return 0;
}
