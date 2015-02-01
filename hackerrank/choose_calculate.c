#include<stdio.h>
int main()
{
	int n,k,a[100003],i,j;
	long long int sum=0;
	scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			sum=sum+abs(a[j]-a[i]);
			sum=sum%(1000000007);
		}
	}
	printf("%lld\n",sum);
	return 0;
}