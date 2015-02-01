#include<stdio.h>
int main()
{
	int t,count,dig;
	long long int n,n1;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%lld",&n);
		n1=n;
		while(n1)
		{
			dig=n1%10;
			n1=n1/10;
			if(dig!=0)
			{
				if(n%dig==0)
					count++;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}