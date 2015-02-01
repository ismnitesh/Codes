#include<stdio.h>
int main()
{
	int t,a[100006],min,max,i,n,m,num;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		min=999999;
		max=0;
		for(i=0;i<m;i++)
		{
			scanf("%d",&num);
			if(num>max)
				max=num;
			if(num<min)
				min=num;
		}
		a[min]=max-min;
		a[max]=max-min;
		for(i=0;i<n;i++)
		{
			if(abs(i-min)>abs(i-max))
				a[i]=abs(i-min);
			else
				a[i]=abs(i-max);
			printf("%d ",a[i]);
		}
		printf("\n");
	}
	return 0;
}