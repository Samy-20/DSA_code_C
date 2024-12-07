#include <stdio.h>

void display(int arr[], int size)
{
    printf("Elemnt in array is:\n");
    for (int i = 0; i < size; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}

int binnary_search(int arr[], int element, int size)
{
    int low, high, mid;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] < element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 2, 25, 66, 85, 100};
    int size = sizeof(arr) / sizeof(int);
    int element;
    printf("*\n___________Binnary Search___________*\n");
    display(arr, size);
    printf("Enter the element you want to find index in given array:\n");
    scanf("%d", &element);
    int posiiton = binnary_search(arr, element, size);
    printf("The elment %d is at index is %d", element, posiiton);
    return 0;
}