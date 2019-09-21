#include<stdio.h>
int xstrlen(char *);
int main()
{
    int len;
    char str1[20];
    printf("Enter the string.\n");
    scanf("%[^\n]s",&str1);
    len=xstrlen(str1);
    printf("The length of the string is %d.\n",len);
}
int xstrlen(char *str)
{
    int i=0;
    while(*str!='\0')
    {
        i=i+1;
        *str++;
    }
    return i;
}
