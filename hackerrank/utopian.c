#include<stdio.h>
int main()
{
	int t,n,h;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		h=1;
		if(n%2==0)
		{
			n=n/2;
			while(n--)
			{
				h=h*2;
				h=h+1;
			}
			printf("%d\n",h);
		}
		else
		{
			n=n/2;
			while(n--)
			{
				h=h*2;
				h++;
			}
			h=h*2;
			printf("%d\n",h);
		}
	}
	return 0;
}