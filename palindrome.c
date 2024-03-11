#include<stdio.h>
int check_pal(int n);
int main()
{
    int n = 16461;
    int m = 13421;
    check_pal(n);
    check_pal(m);
    return 0;
}
int check_pal(int n)
{
    int t = n;
    int rev = 0;
    while (t != 0)
    {
        rev = rev * 10 + t % 10;
        t = t / 10;
    }
    if (rev == n)
    {
        printf("%d is palindrome\n", n);
        return 1;
    } else {
        printf("%d is not palindrome\n", n);
        return 0;
    }
}
