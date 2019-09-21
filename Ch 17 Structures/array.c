#include<stdio.h>
#include<stdlib.h>
int main()
{
    char name[5];
    float price[5];
    int pages[5];
    int i;
    printf("Enter the names, prices and no of pages in 3 books.\n");
    scanf(" %c %f %d" , &name[0] , &price[0] , &pages[0]);
    scanf(" %c %f %d" , &name[1] , &price[1] , &pages[1]);
    scanf(" %c %f %d" , &name[2] , &price[2] , &pages[2]);
    printf("And this is what you entered.\n");
    for(i=0;i<3;i++)
        printf("%c   %f    %d\n",name[i],price[i],pages[i]);
    return 0;
    }
