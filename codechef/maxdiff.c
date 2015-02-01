#include<stdio.h>
int main()
{
	int t,n,k,a[103],sum=0,i,j,temp,kid=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		sum=0;
		kid=0;
		for(i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
			sum=sum+a[i];
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n-1;j++)
			{	
				if(a[j]>a[j+1])
				{
					temp=a[j];
					a[j]=a[j+1];
					a[j+1]=temp;
				}
			}
		}
		if(k>(n-k))
			k=n-k;
		for(i=0;i<k;i++)
		{
			kid=kid+a[i];
		}
		sum=sum-2*kid;
		printf("%d\n",sum);
	}
	return 0;
}