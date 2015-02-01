#include<stdio.h>
#include<conio.h>
int fact(int);
int main()
{int a,b;
printf("enter any number\n");
scanf("%d",&a);
b=fact(a);
printf("factorial of %d is %d\n",a,b);
getch();
return 0;
}
int fact(int i)
{
	int j,fact=1;
for(j=i;j>0;j--)
fact=fact*j;
return fact;
}
