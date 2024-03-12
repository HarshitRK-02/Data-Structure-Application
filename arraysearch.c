#include <stdio.h>
int search_element(int arr[], int size, int target);
int main()
{
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int numbers[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &numbers[i]);
    }
    int target;
    printf("Enter the target element to search: ");
    scanf("%d", &target);
    int index = search_element(numbers, size, target);
    if (index != -1)
    {
        printf("Element %d found at index %d\n", target, index);
    } else
    {
        printf("Element %d not found in the array\n", target);
    }
    return 0;
}
int search_element(int arr[], int size, int target)
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
