#include<stdio.h>
int main()
{
	int t,count;
	char s[4];
	scanf("%d",&t);
	count=0;
	while(t--)
	{
		scanf("%s",s);
		if(s[1]=='+')
			count++;
		else
			count--;
	}
	printf("%d\n",count);
	return 0;
}