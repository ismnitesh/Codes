#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,len,flag;
	long long int count;
	char s[1000005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		flag=0;
		count=1;
		for(i=0;i<len;i++)
		{
			if(s[i]=='?')
			{
				if(s[len-i-1]=='?')
				{
					count=count*26;
					count=count%10000009;
					s[i]='a';
					s[len-i-1]='a';
				}
				else
				{
					s[i]=s[len-i-1];
				}
			}
		}
		for(i=0;i<=len/2;i++)
		{
			if(s[i]!=s[len-i-1])
			{
				flag=1;
				break;
			}
		}
		if(flag)
			printf("0\n");
		else
			printf("%lld\n",count);
	}
	return 0;
}