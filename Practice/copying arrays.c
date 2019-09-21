#include<stdio.h>
char xstrcpy(char *, char *);
int main()
{
    char str1[10],str2[10];
    printf("Enter the elements of the string.\n");
    scanf("%[^\n]s",&str1);
    xstrcpy(str1,str2);
    printf("%s \n",str2);
}
char xstrcpy(char *copy,char *into)
{
    while(*copy!='\0')
    {
        *into=*copy;
        *into++;
        *copy++;
    }
    *into='\0';
}
