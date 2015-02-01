#include<stdio.h>
int main()
{
	int t,a[32005],f,i,j;
	int n,m;
	int k=0;
	for(i=2;i<=32000;i++)
	{
		f=0;
		for(j=2;j*j<=i;j++)
		{
			if(i%j==0)
			{
				f=1;
				break;
			}
		}
		if(f==0)
			a[k++]=i;
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		if(n==1)
			n++;
		for(i=n;i<=m;i++)
		{
			f=0;
			k=0;
			for(j=a[k];j*j<=i;j=a[k++])
			{
				if(i%j==0)
				{
					f=1;
					break;
				}
			}
			if(f==0)
				printf("%d\n",i);
		}
		printf("\n");
	}
	return 0;
}