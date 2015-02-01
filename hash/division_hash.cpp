#include<stdio.h>
#include<conio.h>
int main()
{
	int hash(int);
	int i,x,y;
	printf("press any key to generate the hash table for employee code (keys) x-y\n");
	getch();
	printf("x= ");
	scanf("%d",&x);
	printf("y= ");
	scanf("%d",&y);

	printf("\n\n\t******hash table*******\n");
	printf("\n\t\tkey\taddress");
	for(i=x;i<=y;i++)
	{
		printf("\n\t\t%d\t %d",i,hash(i));
	}
	getch();
	return 0;
}
int hash(int x)
{
	return((x%9)+1);
}
