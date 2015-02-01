#include<stdio.h>
#include<string.h>
int main()
{
	int t,l,i,count;
	char s[100005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",s);
		l=strlen(s);
		count=0;
		for(i=0;i<l-1;i++)
		{
			if(s[i]==s[i+1])
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}