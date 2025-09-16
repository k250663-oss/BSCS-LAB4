 #include <stdio.h>
#include<string.h>
int main()
{
int size , amount , crust ,del , time ,dt ;
char cheese[2] = "y";
char stud[2]="y";
float total = 0;
printf("\n 1.DElivery \n 2.Pickup \n choose yours :");
    scanf("%d", &del);
    switch(del){
        case 1:
        del=3;
        break;
        case 2:
        del=0;
        break;
}
total = total + del;
    printf("final total is %d",total);
}
