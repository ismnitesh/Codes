#include<stdio.h>
int rev(int x)
{
	int ans=0;
	while(x)
	{
		ans=ans*10+x%10;
		x=x/10;
	}
	return ans;
}
int ispalin(int x)
{
	if(x==rev(x))
		return 1;
	else
		return 0;
}
int main()
{
	int t,n,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		while(1)
		{
			if(ispalin(n))
				break;
			n=n+rev(n);
			count++;
		}
		printf("%d %d\n",count,n);
	}
	return 0;
}