#include <stdio.h>
int main()
{
    int n, f= 0,s=1,next;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Fibonacci Series: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d, ", f);
        next = f+s;
        f=s;
        s=next;
    }
    return 0;
}
