//overall delection case in one program


#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void traversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element %d\n", ptr->data);
        ptr = ptr->next;
    }

    
}

struct node *delection_atgiven(struct node *head, int size, int index)
{
    struct node *p = head;
    struct node *q = head->next;

    if (index == 0)
    {
        head = head->next;
        free(p);
        return head;
    }

    else if (index == size - 1)
    {
        while (q->next != NULL)
        {
            p = p->next;
            q = q->next;
        }
        p->next = NULL;
        free(q);
        return head;
    }

    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
            q = q->next;
        }
        p->next = q->next;
        free(q);
        return head;
    }
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
    third->next = NULL;

    traversal(head);

    int size, index;
    printf("Enter the size of link list:\n");
    scanf("%d", &size);
    printf("Enter the index of element you wnat to delete in link list:\n");
    scanf("%d", &index);

    head = delection_atgiven(head, size, index);
    traversal(head);
    return 0;
}