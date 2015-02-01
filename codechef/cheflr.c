#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,len;
	long long int count;
	char s[100005];
	scanf("%d",&t);
	while(t--)
	{
		count=1;
		scanf("%s",s);
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			if(s[i]=='r' && i%2==0)
			{
				count=count*2+2;
				count=count%1000000007;
			}
			if(s[i]=='l' && i%2==0)
			{
				count=count*2;
				count=count%1000000007;
			}
			if(s[i]=='r' && i%2==1)
			{
				count=count*2+1;
				count=count%1000000007;
			}
			if(s[i]=='l' && i%2==1)
			{
				count=count*2-1;
				count=count%1000000007;		
			}
		}
		printf("%lld\n",count%1000000007);
	}
	return 0;
}