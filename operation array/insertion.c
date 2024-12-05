#include<stdio.h>


void display(int arr[], int n){
    // traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
    
}

int indinsertion(int arr[], int element, int capacity, int size, int index){
    //insertion from index.
    if (size>=capacity)
    {
        return -1;
    }
    
    for (int i = size-1; i >= index; i--)
    {
        arr[i+1] = arr[i];
    }
    arr[index] = element;
    return 1;
}

int main(){
    int arr[100] = {1, 2, 3, 7, 8};
    //size is stored the value of used elemnt in array.
    //element-> these eelement are want to insert in array.
    int size = 5, element = 6, index = 3;//index:- place at these the element are what to insert 
    display(arr, 5);
    indinsertion(arr, element, 100, size, index);
    size+=1;
    //after insertion the size of array increases by 1.
    printf("after  the insertion result is:->\n");
    display(arr, 5);
    return 0;
}
