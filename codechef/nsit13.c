#include<stdio.h>
int main()
{
	int i,n,a[42],count,t;
	t=10;
	while(t--)
	{
		count=0;
		for(i=0;i<42;i++)
			a[i]=0;
		for(i=0;i<10;i++)
		{
			scanf("%d",&n);
			n=n%42;
			a[n]++;
			if(a[n]==1)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}