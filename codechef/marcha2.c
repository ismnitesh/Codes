#include<stdio.h>
int main()
{
	int t,n,l,s;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		s=1;
		while(n--)
		{
			scanf("%d",&l);
			s=s-l;
			s=s*2;
			if(s<0)
				break;
		}
		if(s==0)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}