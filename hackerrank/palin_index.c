#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,flag;
	char s[100007];
	scanf("%d",&t);
	while(t--)
	{
		flag=0;
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<=l/2;i++)
		{
			if(s[i]!=s[l-i-1])
			{
				if(s[i]==s[l-i-2])
				{
					flag=1;
					printf("%d\n",l-i-1);
					break;
				}
				else
				{
					flag=1;
					printf("%d\n",i);
					break;
				}
			}
		}
		if(flag==0)
			printf("-1\n");
	}
	return 0;
}