#include<stdio.h>
#include<string.h>
int main()
{
	int t,num,len,i;
	char s[1000000];
	scanf("%d",&t);
	while(t--)
	{
		num=0;
		scanf("%s",s);
		len=strlen(s);
		for(i=0;i<len;i++)
		{
			num=num*10+s[i]-48;
			if(num==32)
			{
				printf("%c",num);
				num=0;
			}
			if(num>64 && num<91)
			{
				printf("%c",num);
				num=0;
			}
			else if(num>96 && num<123)
			{
				printf("%c",num);
				num=0;
			}
		}
		printf("\n");
	}
	return 0;
}