#include<stdio.h>
#include<conio.h>
int main()
{
	float n,a;
	printf("enter any number\n");
	scanf("%f",&n);
	if(n>=0)
	a=n;
	else
	a=n*(-1);
	printf("%f\n",a);
	getch();
	return 0;
}
