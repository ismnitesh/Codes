#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[25],b,c=0;
	printf("enter 25 numbers\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter number for check\n");
	scanf("%d",&b);
	for(i=0;i<25;i++)
	{
		if(b==a[i])
		c++;
	}
	printf("%d comes %d times",b,c);
	getch();
	return 0;
}
