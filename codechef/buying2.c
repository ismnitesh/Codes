#include<stdio.h>
int main()
{
	int t,n,x,a[105],flag,sum,i,z;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%d%d",&n,&x);
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		z=sum%x;
		flag=0;
		for(i=0;i<n;i++)
		{
			if(a[i]<=z)
			{
				flag=1;
				break;
			}
		}
		if(flag==1)
			printf("-1\n");
		else
			printf("%d\n",sum/x);
	}
	return 0;
}