#include<stdio.h>
int main()
{
	long long int x,z;
	{
		scanf("%lld",&x);
		z=x%6;
		if(z==0 || z==1 || z==3)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}