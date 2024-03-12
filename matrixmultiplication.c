#include <stdio.h>
int main()
{
    int arr[2][2], n;
    printf("enter the number which is to be multiplied to the matrix:");
    scanf("%d", &n);
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            printf("enter the element of matrix");
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            arr[i][j] = arr[i][j] * n;
        }
    }
    for(int i = 0; i < 2; i++)
        {
        for(int j = 0; j < 2; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
