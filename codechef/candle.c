#include<stdio.h>
int main()
{
	int t,a[12],x,i,min;
	scanf("%d",&t);
	while(t--)
	{
		min=12;
		for(i=0;i<10;i++)
			scanf("%d",&a[i]);
		for(i=1;i<10;i++)
		{
			if(min>a[i])
			{
				min=a[i];
				x=i;
			}
		}
		if(min==0)
			printf("%d\n",x);
		else if(a[0]<min)
		{
			printf("1");
			for(i=0;i<min;i++)
				printf("0");
			printf("\n");
		}
		else
		{
			for(i=0;i<=min;i++)
				printf("%d",x);
			printf("\n");
		}
	}
	return 0;
}