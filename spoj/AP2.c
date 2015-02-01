#include<stdio.h>
int main()
{
	int t;
	long long int x,y,z,a,d,n,i;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld%lld%lld",&x,&y,&z);
		n=(2*z)/(x+y);
		d=(y-x)/(n-5);
		a=x-(2*d);
		for(i=0;i<n;i++)
			printf("%lld ",(a+(i)*d));
		printf("\n");
	}
	return 0;
}