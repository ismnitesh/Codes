#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,len,bal,max;
	char s[100006];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		len=strlen(s);
		bal=0;
		max=0;
		for(i=0;i<len;i++)
		{
			if(s[i]=='(')
				bal++;
			else
				bal--;
			if(bal>max)
				max=bal;
		}
		for(i=0;i<max;i++)
			printf("(");
		for(i=0;i<max;i++)
			printf(")");
		printf("\n");
	}
	return 0;
}