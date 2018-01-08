#include<stdio.h>
void main()
{
int number;
if(number>0)
{
printf("the given number is positive");
scanf("%d",&number);
}
else if(number<0)
{
printf("the given number is negative");
}
else
{
printf("the given number is zero");
}
getch();
}
