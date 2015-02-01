#include<stdio.h>
int main()
{
	int n,a,b,i,q,flag,h[100005];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&h[i]);
	scanf("%d",&q);
	while(q--)
	{
		scanf("%d%d",&a,&b);
		flag=0;
		for(i=a+1;i<b;i++)
		{
			if(h[i]>h[a])
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}