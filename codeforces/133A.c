#include<stdio.h>
#include<string.h>
int main()
{
	int i,len,flag;
	char s[105];
	scanf("%s",s);
	len=strlen(s);
	flag=0;
	for(i=0;i<len;i++)
	{
		if(s[i]=='H' || s[i]=='Q' || s[i]=='9')
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