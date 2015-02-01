#include<stdio.h>
#include<math.h>
int main()
{
	long long int t,n,a1;
	float ans;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld",&n);
		ans=((-1)+sqrt(1+4*2*n))/2.0;
		if(ans-(int)ans!=0.0)
			printf("-1\n");
		else
		{	
			a1=ans;
			printf("%lld\n",a1);
		}
	}
}