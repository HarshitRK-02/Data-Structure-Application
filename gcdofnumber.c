#include <stdio.h>
int calculateGCD(int num1, int num2);
int main()
{
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    int gcd = calculateGCD(num1, num2);
    printf("GCD of input numbers %d and %d is: %d\n", num1, num2, gcd);
    return 0;
}
int calculateGCD(int num1, int num2)
{
    int gcd = 1;
    for (int i = 1; i <= num1 && i <= num2; ++i)
    {
        if (num1 % i == 0 && num2 % i == 0)
        {
            gcd = i;
        }
    }
    return gcd;
}
