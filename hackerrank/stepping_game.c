#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	long long int n;
	double x;
	int y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lld",&n);
		x=(sqrt(8*n+1)-1)/2;
		y=(int)x;
		double z=x-y;
		if(z==0.0)
			printf("Go On Bob %d\n",y);
		else
			printf("Better Luck Next Time\n");
	}
	return 0;
}