#include <stdio.h>
#include<string.h>
int main()
{
int size , amount , crust ,del , time ,dt ;
char cheese[2] = "y";
char stud[2]="y";
float total = 0;
printf("enter time 0-23:");
  scanf("%d", &time);
 if (time >= 11 && time <= 14){
      dt = (total * 10)/100;
      total = total - dt;
      printf("discounted total:%d",total);
  }
}