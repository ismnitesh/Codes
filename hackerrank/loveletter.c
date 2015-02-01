#include<stdio.h>
#include<string.h>
int val(char a,char b)
{
	if(a>b)
		return (a-b);
	else
		return (b-a);
}
int main()
{
	int t,i,len,v;
	char a[10004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		len=strlen(a);
		v=0;
		for(i=0;i<len/2;i++)
		{
			v=v+val(a[i],a[len-1-i]);
		}
		printf("%d\n",v);
	}
	return 0;
}