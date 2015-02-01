#include<stdio.h>
int main()
{
	int n,a[105],i,j,flag;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
		printf("%d",a[0]);
	else
	{
		for(i=0;i<n;i++)
		{
			flag=0;
			for(j=0;j<n;j++)
			{
				if(i!=j&&a[i]==a[j])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d",a[i]);
				break;
			}
		}
	}
	return 0;
}