#include<stdio.h>
int main()
{
    int r,s,a;
    printf("Enter the ages of Ram, Shyam and Ajay.\n");
    scanf("%d%d%d",&r,&s,&a);
    if(r<s&&r<a)
       {
           printf("Ram is youngest.\n");

       }
    if(s<r&&s<a)
        {
            printf("Shyam is youngest.\n");
        }
    if(a<r&&a<s)
        {
            printf("Ajay is youngest.\n");
        }
    if(r==s==a)
    {
        printf("All are of equal age.\n");
    }
}
