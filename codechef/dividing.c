#include<stdio.h>
int main()
{
	long long int i,n,c,sum=0;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	{	
		scanf("%lld",&c);
		sum=sum+c;
	}
	if(sum==n*(n+1)/2)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}