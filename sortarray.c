#include<stdio.h>
void sort(int n, int *ptr);
int main()
{
    int n=5;
    int arr[]={13,22,7,2,12};
    sort(n,arr);
    return 0;
}
void sort(int n,int *ptr)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                int temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
    printf("\n");
}
