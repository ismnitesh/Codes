#include<stdio.h>
int main()
{
	int n,t,i,a[1005],x,ans;
	
	char b[10];
	for(i=0;i<1005;i++)
		a[i]=0;
	ans=0;
	scanf("%d%d",&n,&t);
	while(t--)
	{
		scanf("%s",b);
		if(b[2]=='O')
		{
			for(i=1;i<=n;i++)
				a[i]=0;
			ans=0;
			printf("0\n");
			
		}
		else
		{
			scanf("%d",&x);
			if(a[x]==0)
			{
				a[x]=1;
				ans++;
				printf("%d\n",ans);
				
			}
			else
			{
				a[x]=0;
				ans--;
				printf("%d\n",ans);
				
			}
		}
	}
	return 0;
}