#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,flag,count;
	char s[105];
	scanf("%s",s);
	len=strlen(s);
	count=1;
	flag=0;
	for(i=1;i<len;i++)
	{
		if(s[i]==s[i-1])
			count++;
		else
			count=1;
		if(count==7)
		{
			flag=1;
			break;
		}
	}
	if(flag)
		printf("YES\n");
	else
		printf("NO\n");
		return 0;
}