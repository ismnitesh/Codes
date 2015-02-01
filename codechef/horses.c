#include<stdio.h>
int main()
{
	int t,n,s[5002],diff,newdiff,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%d",&s[i]);
		}
		diff=999999999;
		for(i=0;i<n;i++)
		{
			for(j=i+1;j<n;j++)
			{
				newdiff=abs(s[i]-s[j]);
				if(newdiff<diff)
					diff=newdiff;
			}
		}
		printf("%d\n",diff);
	}
	return 0;
}