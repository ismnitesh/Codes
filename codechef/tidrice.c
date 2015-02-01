#include<stdio.h>
#include<string.h>
int main()
{
	int t,n,i,len[105];
	char s[105][22];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			scanf("%s",s[i]);
			len[i]=strlen(s[i]);
		}
		
	}
	return 0;
}