#include<stdio.h>
int main()
{
	int t,n,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		count=(n/7)*7;
		count=count-((n-count)%4)*7;
		if(count>=0)
		{
			printf("%d\n",count);
		}
		else
			printf("-1\n");
	}
	return 0;
}