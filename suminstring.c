#include<stdio.h>
int main()
{
    char s[6]="12345";
    int r=0;
    for(int i=0;s[i]!='\0';i++)
    {
        int a=s[i]-'0';
        if(a<=7)
        {
            r+=a;
        }
    }
    printf("%d",r);
    return 0;
}
