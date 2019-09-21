#include<stdio.h>
int xstrlen(char *);
int main()
{
    char arr[10];
    int len;
    printf("Enter the string\n");
    scanf("%s",arr);
    len=xstrlen(arr);
    printf("The length of the string is %d\n",len);
    return 0;
}
int xstrlen(char *p)
{
    int i=0;
    for(;*p!='\0';)
    {
        i++;
        *p++;
    }
    return i;
}
