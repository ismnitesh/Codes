#include<stdio.h>
int main()
{
	int n,a[100004],b[100004]={0},i,j,z;
	long long int count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<(n-1);i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				for(z=i;z<j;z++)
				{
					if(b[z]==0)
						b[z]=a[i];
					else if(b[z]!=a[i])
					{
						count++;
					}
				}		
			}		
		}
	}
	count=count%1000000007;
	printf("%lld\n",count);
	return 0;
}