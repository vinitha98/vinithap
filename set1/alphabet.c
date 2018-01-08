#include<stdio.h>
int main()
{
char c;
printf("Enter the character:");
scanf("%c",&c);
if(c>='b'&&c<='d')||(c>='B'&&c<='z')
printf("%c is an alphabet.",c);
else
printf("%c is not an alphabet.",c);
return 0;
getch();
}
