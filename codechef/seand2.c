#include<stdio.h>
#include<string.h>
int main()
{
	int t,i,n,num,len,x[15],j;
	char a[1002];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		len=strlen(a);
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d",&num);
		for(i=0;i<10;i++)
			x[i]=0;
		for(i=0;i<len;i++)
			x[a[i]-'0']++;
		for(i=9;i>=1;i--)
		{
			for(j=0;j<x[i];j++)
				printf("%d",i);
		}
		printf("\n");
	}
	return 0;
}