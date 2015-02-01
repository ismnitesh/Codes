#include<stdio.h>
int main()
{
	int t,n,a;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		a=(n-1)%4;
		if(a==0)
			printf("ALICE\n");
		else
			printf("BOB\n");
	}
	return 0;
}