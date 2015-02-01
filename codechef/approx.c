#include<stdio.h>
int main()
{
	int t,d;
	long int k,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%ld",&k);
		n=103993%33102;
		if(k==0)
			printf("3");
		else
		{
			printf("3.");
			while(k)
			{
				n=n*10;
				d=n/33102;
				n=n%33102;
				printf("%d",d);
				k--;
			}
		}
		printf("\n");
	}
	return 0;
}