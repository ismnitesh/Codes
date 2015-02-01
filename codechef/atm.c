#include<stdio.h>
#include<conio.h>
int main()
{
	int q;
	float x,z,y;
	scanf("%d",&q);
	x=q;
	scanf("%f",&y);
	if(q%5==0 && y-x>=0.5)
	{
		z=y-x-0.5;
		printf("%0.2f",z);
	}
	else
	{
		z=y;
		printf("%0.2f",z);
	}
	getch();
	return 0;
}
