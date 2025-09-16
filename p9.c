#include <stdio.h>
#include<string.h>
int main()
{
int size , amount , crust ,del , time ,dt ;
char cheese[2] = "y";
char stud[2]="y";
float total = 0;


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
  printf("\n\nquantity:");
scanf("%d", &amount);
if(amount>1){
    printf("check out our multi pizza deals!");
}
else{
    printf("total=$8");
}
printf("\nhow many do you want (1-3):");
scanf("%d", &amount);
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
        printf("error");}


    printf("\n\n 1.Suffed crust $2\n 2.Thin Crust $1 \n 3.Regular crust\n choose yours :");
    scanf("%d", &crust);
    switch(crust){
        case 1:
        crust=2;
        break;
        case 2:
        crust=1;
        break;
        case 3:
        crust=0;
    }
    total = total + crust;
    printf("new total:%.2f",total);

    if (amount == 3 && crust == 2) {
    printf("\nYou get free garlic bread!");
    }
}