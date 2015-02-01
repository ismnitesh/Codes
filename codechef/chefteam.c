#include<stdio.h>
inline fact(int a)
{
	if(a==0)
		return 1;
	else
	{
		if(a==1)
			return 1;
		else
			return a*fact(a-1);
	}
}
int main()
{
	int t,n,k;
	long int ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		ans=(fact(n)/(fact(k)*fact(n-k)));
		printf("%ld\n",ans);
	}
	return 0;
}