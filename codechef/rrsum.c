#include<stdio.h>
int main()
{
	long long int n,m,q,i,cnt,diff,sum;
	scanf("%lld %lld",&n,&m);
	sum=n+n+1;
	while(m--)
	{
	   cnt=0;
		scanf("%lld",&q);
	   diff=abs(sum-q);
	   if(diff<=n)
	   {
	   	  printf("%lld\n",n-diff);
	   }
	   else
	    printf("0\n");
	}
	return 0;
}
