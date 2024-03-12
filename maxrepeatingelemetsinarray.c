#include <stdio.h>
int isMajority(int arr[], int n, int x);
int main()
{
    int arr[] = {1, 2, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 3;
    if (isMajority(arr, n, x))
        printf("%d appears more than %d times", x, n / 2);
    else
        printf("%d does not appear more than %d times", x, n / 2);

    return 0;
}
int isMajority(int arr[], int n, int x)
{
    int i;
    int last_index = n % 2 ? (n / 2 + 1) : (n / 2);
    for (i = 0; i < last_index; i++)
    {
        if (arr[i] == x && arr[i + n / 2] == x)
        return 1;
    }
    return 0;
}
