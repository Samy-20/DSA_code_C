#include<stdio.h>

void display(int arr[], int size){
    printf("The elemnt in array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    
}

int linear(int arr[], int size, int element){
    for (int i = 0; i < size-1; i++)
    {
        if (arr[i] == element)
        {
            return i;
        }
        
    }
    printf("Please enter the valid number");
}

int main(){
    int arr[] = {1,23,56,2,3,4,5,6,75,89};
    int size = sizeof(arr)/sizeof(int);
    int element;
    printf("*\n___________Linear Search___________*\n");
    display(arr, size);
    printf("Enter the element you want to find in array:\n");
    scanf("%d", &element);
    int position = linear(arr, size, element);
    printf("These element is at positon %d", position);
    return  0;
}