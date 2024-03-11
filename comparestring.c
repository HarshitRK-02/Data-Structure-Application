#include<stdio.h>
int compare(char str1[], char str2[]);
int main() {
    char str1[10], str2[10];
    int value;

    printf("Enter the string 1: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the string 2: ");
    fgets(str2, sizeof(str2), stdin);

    value = compare(str1, str2);

    if(value == 0)
        printf("Strings are same.\n");
    else
        printf("Strings are not same.\n");

    return 0;
}
int compare(char str1[], char str2[])
{
    int i;
    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
            return 1;
    }
    return 0;
}
