#include<stdio.h>
int main()
{
	long long int n,o,a,b,add;
	long long int total=0;
	scanf("%lld%lld",&n,&o);
	while(o--)
	{
		scanf("%lld%lld%lld",&a,&b,&add);
		total=total+((b-a+1)*add);
	}
	printf("%lld",total/n);
	return 0;
}