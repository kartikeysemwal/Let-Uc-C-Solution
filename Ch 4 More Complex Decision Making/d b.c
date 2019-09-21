#include<stdio.h>
#include<conio.h>
int main()
{
    char a;
    printf("\nEnter any character capital letter, small case letter, a digit or a special symbol.\n");
    scanf("%c",&a);
    if(a>=65&&a<=90)
        printf("It is an upper case letter.\n");
    else if(a>=97&&a<=122)
        printf("It is lower case letter.\n");
    else if(a>=48&&a<=57)
        printf("It is a digit from 0-9.\n");
    else if((a>=0&&a<=47)||(a>=58&&a<=64)||(a>=91&&a<=96)||(a>=123&&a<=127))
        printf("It is a special symbol.\n");
}
