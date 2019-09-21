#include<stdio.h>
#include<stdlib.h>
main()
{
    int i=0;

    system("cls");
    while(i<=255)
    {
        printf("%d %c\n",i,i);
        i++;
    }
    printf("\n\n\n\n\n\nPress any key to exit.\n");
    getch();
}

