#include <stdio.h>
int search(int arr[],int N,int x);
int main(void)
{
    int arr[]={9,3,2,1,10,4};
    int x;
    printf("Search element: ");
    scanf("%d", &x);
    int N = sizeof(arr)/sizeof(arr[0]);
    int result = search(arr, N, x);
    return 0;
}
int search(int arr[],int N,int x)
{
    int i;
    for (i=0; i<N;i++)
    {
        if (arr[i]==x)
        {
            printf("Element is present at index %d\n", i);
            return i;
        }
    }
    printf("Element is not present in array\n");
    return -1;
}
