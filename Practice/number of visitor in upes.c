#include<stdio.h>
void increment(char);
int main()
{
    char answer;
    printf("Whether a new user arrived in UPES.\n");
    scanf(" %c",&answer);
    increment(answer);
    return 0;
}
void increment(char ans)
{
    int static i=0;
    if(ans=='y'||ans=='Y')
    i=i+1;
    else if(ans=='n'||ans=='N')
    printf("The number of visitor entered are %d\n",i);
    else
    printf("Please input a valid answer.\n");
    main();
}
