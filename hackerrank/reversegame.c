#include<stdio.h>
int main()
{
	int t,n,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&k);
		n--;
		if(k<n/2)
			printf("%d\n",(k+1)*2-1);
		else
			printf("%d\n",2*(n-k));
	}
	return 0;
}