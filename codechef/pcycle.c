#include<stdio.h>
int main()
{
	int n,a[1007],v[1007],cycle[3009],i,j,k,num=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		v[i]=0;
	}
	i=1;
	k=-1;
	while(1)
	{
		if(v[i]==1)
		{
			num++;
			cycle[++k]=i;
			cycle[++k]=-1;
			for(j=1;j<=n;j++)
			{
				if(v[j]==0)
					break;
			}
			if(j==n+1)
				break;
			i=j;
		}
		else
		{
			v[i]=1;
			cycle[++k]=i;
			i=a[i];
		}
	}
	printf("%d\n",num);
	for(i=0;i<=k;i++)
	{
		if(cycle[i]==-1)
			printf("\n");
		else
			printf("%d ",cycle[i]);
	}
	return 0;
}