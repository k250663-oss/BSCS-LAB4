#include <stdio.h>
int main()
{
int size , amount , crust;
double total = 0;
 printf("\ndo you want 1,2,3?");
    scanf("%d",&amount);
    switch(amount){
        case 1:
        total=8;
        printf("1 pizza cost $8");
        break;
        case 2:
        total=15;
        printf("2 pizza cost $15");
        break;
        case 3:
        total=21;
        printf("3 pizza cost $21");
        break;
        default:
        printf("error");}}
