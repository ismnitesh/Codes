#include<stdio.h>
int main()
{
	int t,n,c,m,w,count;
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d%d%d",&n,&c,&m);
		count=n/c;
		w=count;
		while(w>=m)
		{
			w=w-m;
			count++;
			w++;
		}
		printf("%d\n",count);
	}
	return 0;
}