#include<stdio.h>
#include<string.h>
int main()
{
	int t,b[100][26]={0},len[100]={0},count=0,flag,i,j;
	char a[100][100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%s",&a[i]);
		len[i]=strlen(a[i]);
	}
	for(i=0;i<t;i++)
	{
		for(j=0;j<len[i];j++)
		{
			b[i][a[i][j]-97]=1;
		}
	}
	for(i=0;i<26;i++)
	{
		flag=0;
		for(j=0;j<t;j++)
		{
			if(b[i][j]==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			count++;
	}
	printf("%d",count);
	return 0;
}