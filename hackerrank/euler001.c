#include<stdio.h>
int main()
{
	int t,n,i;
	long long int sum,n1,n2,n3;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		sum=0;
		n=n-1;
		n1=n/3;
		n2=n/5;
		n3=n/15;
		sum=3*(n1*(n1+1)/2);
		sum=sum+5*(n2*(n2+1)/2);
		sum=sum-15*(n3*(n3+1)/2);
		printf("%lld\n",sum);
	}
	return 0;
}