#include<stdio.h>
#include<string.h>
int main()
{
	int t,len;
	char s[105];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		if(len>10)
		{
			printf("%c",s[0]);
			printf("%d",len-2);
			printf("%c\n",s[len-1]);
		}
		else
			printf("%s\n",s);
	}
}