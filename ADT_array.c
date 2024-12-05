#include<stdio.h>
#include<stdlib.h>

struct student 
{
    int total_size;
    int used_size;
    int *ptr;
};

void createarray(struct student * a, int t_size, int u_size){
    a->total_size = t_size;//defrencing total_size same for used_size
    a->used_size = u_size;
    a->ptr = (int *) malloc (t_size * sizeof(int));
}

void show(struct student * a){
    for (int  i = 0; i < a->used_size; i++)
    {
        printf("%d\n", (a->ptr)[i]);
    }
    
}
void setval(struct student * a){
    int n;
    for (int  i = 0; i < a->used_size; i++)
    {
        printf("Enter the element %d", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

int main(){
    struct student marks;//insatace of struct student.
    createarray(&marks, 100, 2);
    setval(&marks);// passing the address of marks.
    show(&marks);
}