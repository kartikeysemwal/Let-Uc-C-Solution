#include<stdio.h>
char xstrcat(char *,char *);
int main()
{
    char str1[20],str2[40];
    printf("Enter the first string.\n");
    scanf(" %[^\n]s",&str1);
    printf("Enter the second string.\n");
    scanf(" %[^\n]s",&str2);
    xstrcat(str1,str2);
    printf("%s\n",str2);
    return 0;
}
char xstrcat(char *copy,char *into)
{
    while(*into!='\0')
    {
        *into++;
    }
    while(*copy!='\0')
    {
        *into=*copy;
        *into++;
        *copy++;
    }
    *into='\0';
}
