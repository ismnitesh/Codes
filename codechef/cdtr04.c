#include<stdio.h>
int main()
{
	int t,num,b[105],i,count,n,k,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<=100;i++)
			b[i]=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&num);
			b[num]++;
		}
		scanf("%d",&k);
		count=0;
		for(i=1;i<=k/2;i++)
		{
			j=k-i;
			if(i==j)
				count=count+((b[i]*(b[i]-1))/2);
			else
				count=count+(b[i]*b[j]);
		}
		printf("%d\n",count);
	}
	return 0;
}