#include<stdio.h>
#include<conio.h>
int main()
{
	int a[25],i,m;
	printf("enter 25 numbers\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&a[i]);
	}
	m=a[0];
	for(i=0;i<25;i++)
	{
		if(a[i]<m)
		m=a[i];
	}
	printf("minimum number is %d\n",m);
	getch();
	return 0;
}
