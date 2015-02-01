#include<stdio.h>
int main()
{
	int t,a,b;
	scanf("%d",&t);
	long long int ans=0,min=0;
	while(t--)
	{
		scanf("%d%d",&a,&b);
		ans=ans-a;
		if(ans<min)
			min=ans;
		ans=ans+b;
	}
	printf("%lld",(-min));
	return 0;
}