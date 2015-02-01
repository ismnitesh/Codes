#include<stdio.h>
#include<string.h>
int main()
{
	int t,k,len,b[27]={0};
	char str[100004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",str);
		len=strlen(str);
		for(i=0;i<len;i++)
		{
			b[str[i]-97]++;
		}
	}
}