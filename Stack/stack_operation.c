#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int size; // size of stack has been store here
    int top; // store value top of stack
    int * arr; // array pointer 
};

void traversal(struct stack * top, int size){
    for (int i = 0; i < size-1; i++)
    {
        printf("Element is %d", i);
    }
    
}

int isFull(struct stack * ptr){
    if(ptr -> top == ptr -> size-1){
        return 1;
    }
    else{
        return 0;
    }
}

int isEmpty(struct stack * ptr){
    if (ptr -> top == -1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}

void push(struct stack * s, int val){
    if (isFull(s))      
    {
        printf("\nThe stack is overflow %d is not able inserted in stack\n", val);
    }
    else{
        s -> top++;
        s -> arr[s->top] = val; 
    }
}

int pop(struct stack * s){
    if(isEmpty(s)){
        printf("\nThe stack is underflow not able pop from stack\n\n");
    }
    else{
        int val = s->arr[s->top];
        s -> top--;
        return val;
    }
}

//top -> is an top element in stack
//peek -> used to find position of element from stack
int peek(struct stack * s, int i){
    if(s->top-i+1 < 0){
        printf("Envalid, is not determine\n");
        return -1;
    }
    else{
       return s -> arr[s->top-i+1]; 
    }
}

int main(){
    struct stack * s = (struct stack *)malloc((sizeof(struct stack)));
    s -> size = 5;
    s -> top = -1;
    s -> arr = (int *)malloc(s->size * sizeof(int)); // allocate dynamic memory to element
    printf("stack has been created\n");
    // traversal(s, 4);

    push(s, 5);
    push(s, 4);
    push(s, 3);
    push(s, 2);
    push(s, 1);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);
    // pop(s);

    for (int j = 0; j < s -> top + 1; j++)
    {
        printf("The Element %d is %d\n", j, peek(s, j));
    }

    return 0;
}