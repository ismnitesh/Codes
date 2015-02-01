#include<stdio.h>
int main()
{
	int t;
	long long int n,a,b,c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		a=0;
		b=1;
		int flag=0;
		while(a<n)
		{
			c=a+b;
			a=b;
			b=c;
			if(b==n)
				flag=1;
		}
		if(flag==1)
			printf("IsFibo\n");
		else
			printf("IsNotFibo\n");
	}
	return 0;
}