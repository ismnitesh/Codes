#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k=1,l;
	for(i=5;i>1;i--)
	{
		for(l=3;l>(5-i);l--)
		printf(" ");
		for(j=5;j>(i-1);j--)
		{
			printf("%d",k);
			k++;
			printf(" ");
		}
		printf("\n");
	}
	getch();
	return 0;
}
