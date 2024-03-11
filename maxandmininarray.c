#include<stdio.h>
void max_min(int arr[], int f) ;
int main()
{
    int arr[] = {12, 23, 12, 4, 2, 65};
    int f = sizeof(arr) / sizeof(arr[0]);
    max_min(arr, f);
    return 0;
}
void max_min(int arr[], int f)
{
    int max, min;
    min = arr[0];
    max = arr[0];
    for (int i = 0; i < f; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    printf("%d max and %d min ", max, min);
}
