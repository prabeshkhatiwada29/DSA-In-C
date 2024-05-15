#include <stdio.h>
int sequential_search(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 8;
    int index = sequential_search(arr, size, target);
    if (index != -1)
    {
        printf(" Targer %d is found at index %d.\n ", target, index);
    }
    else
    {
        printf("Target %d is not found.\n", target);
    }
}