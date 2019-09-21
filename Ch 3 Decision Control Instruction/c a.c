#include<stdio.h>
int main()
{
    int cp,sp;
    printf("Enter the cost price and selling price of the item.\n");
    scanf("%d%d",&cp,&sp);
    if(cp>sp)
        printf("The seller has made a loss of %d",cp-sp);
    if(cp<sp)
        printf("The seller has made a profit of %d",sp-cp);
}
