#include<stdio.h>
#include<math.h>
int main()
{
	int t,n,c,z;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		c=0;
		while(n!=1)
		{
			n=n/2;
			c++;
		}
		z=pow(2,c);
		printf("%d\n",z);
	}
	return 0;
}