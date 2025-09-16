 #include <stdio.h>
int main()
{
int size , amount , crust;
double total = 0;
 
 printf("\n\n 1.Suffed crust\n 2.Thin Crust \n 3.Regular crust\n choose yours :");
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
    printf("total is %d",total);
    }
