#include <stdio.h>
#include<string.h>
int main()
{
int size , amount , crust ,del , time ,dt ;
char cheese[2] = "y";
char stud[2]="y";
float total = 0;
 printf("\nstudent ID (y/n):");
    scanf("%s",stud );
    if (strcmp(stud, "y") == 0)
    {
        total = total -2;
    printf("\nnew total:%d",total);  
  }
}