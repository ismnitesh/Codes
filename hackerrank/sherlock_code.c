#include<stdio.h>
#include<string.h>
int main()
{
	int t,x,i;
	char s[100005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		for(i=0;i<strlen(s);i=i+2)
		{
			x=(s[i]-48)*10+s[i+1]-48;
			printf("%c",(26-x)+97);
		}
		printf("\n");
	}
	return 0;
}