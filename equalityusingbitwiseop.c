#include<stdio.h>
int main()
{
    int x = 11;
    int y = 2;
    if (!(x ^ y))
    {
        printf("%d is equal", x);
    } else
    {
        printf("%d is not equal", x);
    }
    return 0;
}
