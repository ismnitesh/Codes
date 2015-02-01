#include<stdio.h>
int main()
{
	int t,n,count=0,i;
	char s[1001],a[1001];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		for(i=0;i<n;i++)
			a[i]=s[i];
		if(s[0]=='1')
			a[1]='1';
		if(s[n-1]=='1')
			a[n-2]='1';
		for(i=1;i<n-1;i++)
		{
			if(s[i]=='1')
			{
				a[i-1]='1';
				a[i+1]='1';
			}
		}
		for(i=0;i<n;i++)
		{
			if(a[i]=='0')
				count++;
		}
		printf("%d\n",count);
		count=0;
	}
	return 0;
}