#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char s[105];
	scanf("%s",s);
	for(i=0;i<strlen(s);i++)
	{
		if(s[i]!='A' && s[i]!='a' && s[i]!='e' && s[i]!='E' && s[i]!='I' && s[i]!='i' && s[i]!='o' && s[i]!='O' && s[i]!='U' && s[i]!='u' && s[i]!='Y' && s[i]!='y')
		{
			if(s[i]>='A' && s[i]<='Z')
			{
				printf(".");
				printf("%c",s[i]+32);
			}
			else
			{
				printf(".");
				printf("%c",s[i]);
			}
		}
	}
	return 0;
}