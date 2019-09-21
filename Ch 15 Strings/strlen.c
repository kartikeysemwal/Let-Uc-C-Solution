#include<stdio.h>
int xstrlen(char*);
#include<string.h>
int main()
{
    char arr[]="Bamboozied";
    int len1,len2;
    len1=xstrlen(arr);
    len2=xstrlen("Hello how are you");
    printf("The length of the string %s is %d.\n",arr,len1);
    printf("The length of the string %s is %d.\n","Hello how are you",len2);
}
int xstrlen(char *p)
{
    int i;
    i=0;
    while(*p!='\0')
    {
        i=i+1;
        p++;
    }
    return(i);

}
