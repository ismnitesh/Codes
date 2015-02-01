#include<stdio.h>
#include<string.h>
int main()
{
	int a[4],i,sum,l;
	char s[100005];
	for(i=0;i<4;i++)
		scanf("%d",&a[i]);
	scanf("%s",s);
	l=strlen(s);
	sum=0;
	for(i=0;i<l;i++)
		sum=sum+a[s[i]-'1'];
	printf("%d",sum);
	return 0;
}