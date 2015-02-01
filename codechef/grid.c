#include<stdio.h>
int main()
{
	int t,n,i,j,s[1008],e[1008],count;
	char a[1007][1007];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			s[i]=-1;
			e[i]=-1;
			scanf("%s",a[i]);
		}
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(a[i][j]=='#')
				{
					if(s[j]<i)
						s[j]=i;
				}
			}
		}
	//	for(i=0;i<n;i++)
	//		printf("%d ",s[i]);
	//	printf("\n");
		for(i=0;i<n;i++)
		{
			for(j=n-1;j>=0;j--)
			{
				if(a[i][j]=='#')
					break;
				else
				{
					if(s[j]<i)
						count++;
				}
			}
		}
		printf("%d\n",count);
	}
	return 0;
}