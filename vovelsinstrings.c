#include <stdio.h>
void countVowelsAndConsonants(char str[], int *vCount, int *cCount);
int main()
{
    char str[100];
    int vCount = 0, cCount = 0;
    printf("Enter any string: ");
    fgets(str, 100, stdin);
    countVowelsAndConsonants(str, &vCount, &cCount);
    printf("Number of Vowels in String: %d\n", vCount);
    printf("Number of Consonants in String: %d", cCount);
    return 0;
}
void countVowelsAndConsonants(char str[], int *vCount, int *cCount)
{
    char *p = str;
    *vCount = 0;
    *cCount = 0;
    while (*p != '\0') {
        if (*p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U' ||
            *p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u')
            (*vCount)++;
        else if ((*p >= 'A' && *p <= 'Z') || (*p >= 'a' && *p <= 'z'))
            (*cCount)++;
        p++;
    }
}
