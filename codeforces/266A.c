#include<stdio.h>
int main()
{
	int n,count=0,i;
	scanf("%d",&n);
	char s[52];
	scanf("%s",s);
	for(i=1;i<n;i++)
	{
		if(s[i]==s[i-1])
			count++;
	}
	printf("%d",count);
	return 0;
}