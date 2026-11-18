#include <stdio.h>
#include <stdlib.h>
int main()
{
int a,b,c,ch;
printf("enter num\n");
scanf("%d" , &a);
printf("enter num\n");
scanf("%d" , &a);
while(1)
{
printf("\n1. add\n");
printf("\n2. sabtract\n");
printf("\n3. multiplication\n");
printf("\n4. divide\n");
printf("\n5. exit\n");
printf("\nenter your choice");
scanf("%d" , &ch);
switch(ch)
{
case 1:
c=a+b;
printf("%d" , c);
break;

case 2:
c=a-b;
printf("%d" , c);
break;

case 3:
c=a*b;
printf("%d" , c);
break;

case 4:
c=a/b;
printf("%d" , c);
break;

case 5:
printf("\n\n\t\t\t not valid ! \n\n\t\t\t");
exit(0);
}
}
}
