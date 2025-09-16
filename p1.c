#include <stdio.h>
int main()
{
int size , amount , crust;
printf(" 1.Large \n 2.medium \n 3.small \nchoose size of your pizza:");
scanf("%d",&size);
switch(size){
    case 1:
    printf("chosen size :large");
    break;
    case 2:
    printf("chosen size :medium");
    break;
    case 3:
    printf("chosen size :small");
    break;
    default :
        printf("invalid");      
}
}