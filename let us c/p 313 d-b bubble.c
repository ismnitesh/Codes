#include<stdio.h>
#include<conio.h>
int main()
{
	int a[5],i,j,t;
	printf("enter five numbers");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=0;j<5-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
            }
		}
	}
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	getch();
	return 0;
}
