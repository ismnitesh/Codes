#include<stdio.h>
#include<string.h>
int main()
{
	int t,len,i,count;
	char s[10003];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		count=0;
		if(len%2!=0)
			printf("-1\n");
		else
		{
			for(i=0;i<len/2;i++)
			{
				if(s[i]!=s[len-1-i])
					count++;
			}
			printf("%d\n",count);
		}
	}
	return 0;
}