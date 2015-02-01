#include<stdio.h>
#include<string.h>
int main()
{
	int t,x,y,i;
	char s[100000];
	scanf("%d ",&t);
	while(t--)
	{
		gets(s);
		for(i=0;i<strlen(s);i++)
		{
			x=i;
			while(s[i]>='a' && s[i]<='z')
				i++;
			y=i-1;
			while(x<=y)
			{
				printf("%c",s[y]);
				y--;
			}
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}