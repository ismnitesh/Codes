#include<stdio.h>
#include<string.h>
int main()
{
	int a[26]={0},i,len,count;
	char str[100005];
	scanf("%s",str);
	len=strlen(str);
	for(i=0;i<len;i++)
	{
		a[str[i]-97]++;
	}
	count=0;
	for(i=0;i<26;i++)
	{
		if(a[i]%2!=0)
			count++;
	}
	if(len%2==0 && count==0)
		printf("YES\n");
	else if(len%2==1 && count==1)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}