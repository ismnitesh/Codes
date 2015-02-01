#include<stdio.h>
#include<math.h>
int main()
{
	int n,d,i,j,k;
	long long int count=0;
	scanf("%d%d",&n,&d);
	int a[n];
	scanf("%d",&a[0]);
	j=0;
	for(i=1;i<n;i++)
	{
		j++;
		scanf("%d",&a[i]);
		for(k=0;k<j;k++)
		{
			if(abs(a[k]-a[i])==d)
				count++;
		}
	}
	printf("%lld",count);
	return 0;
}