#include<stdio.h>
#include<conio.h>
int main()
{
	int a[4][4],b[4][4],i,j;
	printf("enter 16 numbers\n");
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{scanf("%d",&a[i][j]);
		}
	}
	printf("transpose mat. is\n");
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
			b[i][j]=a[j][i];
			printf("%d\t",b[i][j]);
		}
	}
	getch();
	return 0;
}
