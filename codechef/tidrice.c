#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,n,a[105],j;
	char s[105][25],c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf(" %s",s[i]);
			scanf(" %c",&c);
			if(c=='+')
				a[i]=1;
			else
				a[i]=-1;
		}
		for(i=n-1;i>0;i--)
		{
			if(a[i]!=0)
			for(j=i-1;j>=0;j--)
			{
				if(!strcmp(s[i],s[j]))
					a[j]=0;
			}
		}
		int sum=0;
		for(i=0;i<n;i++)
			sum=sum+a[i];
		printf("%d\n",sum);
	}
	return 0;
}