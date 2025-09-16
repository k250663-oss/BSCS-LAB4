 
#include <stdio.h>
#include<string.h>
int main()
{
int size , amount , crust ,del , time ,dt ;
char cheese[2] = "y";
char stud[2]="y";
float total = 0;
 
 printf("\ncheese (y/n):");
    scanf("%s",cheese );
    if (strcmp(cheese, "y") == 0)
    {
       double total = total +1.5;
    printf("\nnew total:%.2f",total);  
  }
}
