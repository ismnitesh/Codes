#include<stdio.h>
int main()
{
	int n,a[10006],i,count,sum;
	while(1)
	{
		scanf("%d",&n);
		if(n==-1)
			break;
		else
		{
			sum=0;
			for(i=0;i<n;i++)
			{
				scanf("%d",&a[i]);
				sum=sum+a[i];
			}
			if(sum%n!=0)
				printf("-1\n");
			else
			{
				count=0;
				for(i=0;i<n;i++)
				{
					if(a[i]<sum/n)
						count=count+(sum/n)-a[i];
				}
				printf("%d\n",count);
			}
		}
	}
	return 0;
}