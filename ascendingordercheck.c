#include <stdio.h>
int check(int arr[], int size);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int arr[size];
    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    if (check(arr, size))
    {
        printf("The array is in ascending order.\n");
    } else
    {
        printf("The array is not in ascending order.\n");
    }
    return 0;
}
int check(int arr[], int size)
{
    if (size <= 1)
    {
        return 1;
    }
    if (arr[size - 2] > arr[size - 1])
    {
        return 0;
    }
    return check(arr, size - 1);
}
