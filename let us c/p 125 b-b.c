#include<stdio.h>
#include<conio.h>
int main()
{int num,fact=1;
printf("enter any number\n");
scanf("%d",&num);
while(num>=1)
{fact=fact*num;
num--;
}
printf("factorial is %d\n",fact);
getch();
return 0;
}
