#include<stdio.h>
#include<string.h>
char xstrcpy(char *,char *);
int main()
{
    char str[]="Hello";
    char st[10];
    xstrcpy(str,st);
    printf("%s\n",str);
    printf("%s\n",st);
}
char xstrcpy(char *copy,char *into)
{
    while(*copy!='\0')
    {
        *into=*copy;
        *into++;
        *copy++;
    }
}

