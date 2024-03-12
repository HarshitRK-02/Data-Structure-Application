#include <stdio.h>
#include <string.h>
void convertToLowerCase(char str[]);
int main()
{
    char str[25];
    printf("Enter the string: ");
    scanf("%s", str);
    convertToLowerCase(str);
    printf("\nLower Case String is: %s", str);
    return 0;
}
void convertToLowerCase(char str[])
{
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = str[i] + 32;
        }
    }
}
