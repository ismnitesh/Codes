#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5][5],i,j,l;
	printf("enter 25 numbers\n");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	l=a[0][0];
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			if(a[i][j]>l)
			l=a[i][j];
		}
	}
	printf("largest is %d\n",l);
	getch();
	return 0;
}
