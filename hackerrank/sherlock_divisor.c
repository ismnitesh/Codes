#include<stdio.h>
int main()
{
	int i,t,n;
	scanf("%d",&t);
	while(t--)
	{
		int count=0;
		scanf("%d",&n);
		for(i=2;i<=n;i=i+2)
		{
			if(n%i==0)
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}