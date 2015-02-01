#include<stdio.h>
#include<string.h>
int main()
{
	int len,i;
	char s[105];
	scanf("%s",s);
	len=strlen(s);
	int flag=0;
	for(i=1;i<len;i++)
	{
		if(s[i]>='a' && s[i]<='z')
		{
			flag=1;
			break;
		}
	}
	if(flag==0 && s[0]>='a' && s[0]<='z')
	{
		printf("%c",s[0]-'a'+'A');
		for(i=1;i<len;i++)
			printf("%c",s[i]-'A'+'a');
	}
	else if(flag==0 && s[0]>='A' && s[0]<='Z')
	{
		for(i=0;i<len;i++)
			printf("%c",s[i]-'A'+'a');
	}
	else
	{
		for(i=0;i<len;i++)
			printf("%c",s[i]);	
	}
	return 0;
}