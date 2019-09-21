#include<stdio.h>
#include<string.h>
char xstrcat(char *, char *,int,int);
int main()
{
    int len1,len2;
    char str[]="Hello";
    char st[20]="Hi";
    len1=strlen(st);
    len2=strlen(str);
    printf("%d %d\n",len1,len2);
    xstrcat(str,st,len1,len2);
    printf("%s",st);
}
char xstrcat(char *str,char *st,int len1,int len2)
{
    st[20];
    int i,j;
    for(i=1;i<=2;i++)
    {
        *st++;
    }
    while(*str!='\0')
    {
        *st=*str;
        *str++;
        *st++;
    }

}

