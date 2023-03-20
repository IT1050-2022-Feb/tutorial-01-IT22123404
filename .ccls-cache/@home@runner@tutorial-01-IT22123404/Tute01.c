/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include<stdio.h>
int main()
{
int m1,m2,avg;
printf("Enter 1st Mark :");
scanf("%d",&m1);

printf("Enter 2nd Mark :");
scanf("%d",&m2);

avg=(m1+m2)/2.0;
printf("Average is: %d ",avg);
return 0;

}


