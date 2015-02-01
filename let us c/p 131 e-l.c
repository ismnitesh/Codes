#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i;
	float x,a=0.0,b=0.00000,c=0.0;
	printf("enter any number\n");
	scanf("%f",&x);
	a=(x-1)/x;
	for(i=2;i<=7;i++)
	{
		b=b+(pow(((x-1)/x),i)*(0.5));
	}
	c=a+b;
	printf("value of expression is %f\n",c);
	getch();
	return 0;
}
