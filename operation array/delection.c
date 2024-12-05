#include <stdio.h>

void display(int arr[], int n)
{
    // traversal
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", arr[i]);
    }
}

void inddelection(int arr[], int capacity, int size, int index)
{
    // delection from index.
    if (index >= capacity)
    {
        printf("please Enter the valid index\n");
    }
    else
    {
        printf("after  the delection result is:->\n");
        for (int i = index; i < size - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        size -= 1;
        display(arr, size);
    }
}

int main()
{
    int arr[100] = {1, 2, 3, 7, 8};
    // size is stored the value of used elemnt in array.
    int size = 5; 
    int index;// index:- place at these the element are what to insert
    printf("enter the index:\n");
    scanf("%d", &index);//take input from user
    display(arr, size);
    inddelection(arr, 100, size, index);
    // after insertion the size of array increases by 1.
    return 0;
}
