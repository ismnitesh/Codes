#include<stdio.h>
#include<conio.h>
void main()
{
	int hash(int);
	int i;
	
	printf("press any key to generate the hash table for employee code (keys) 2000-2020");
	getch();
	
	printf("\n\n******hash table*******\n");
	printf("\nkey\taddress");
	for(i=2000;i<=2020;i++)
	{
		printf("\n%d\t %d",i,hash(i));
	}
	getch();
	
}
int hash(int k)
{
	return(k%10);
}
