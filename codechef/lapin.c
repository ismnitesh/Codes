#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,count,i,j;
	char s[1000];
	scanf("%d",&t);
	while(t--)
	{
		count=0;
		scanf("%s",s);
		l=strlen(s);
		for(i=0;i<l/2;i++)
		{
			for(j=0;j<l/2;j++)
			{
				if(s[l-i-1]==s[j])
				{
					s[j]=1;
					break;
				}
			}
		}
		for(i=0;i<=l/2;i++)
		{
			if(s[i]==1)
				count++;
		}
		if(count==l/2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}