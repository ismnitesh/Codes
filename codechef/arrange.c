#include<stdio.h>
#include<string.h>
#include<math.h>
inline int bin(int num,int k)
{
	int i,x,a[17];
	for(i=0;i<k;i++)
		a[i]=0;
	i=0;
	while(num)
	{
		a[i++]=num%2;
		num=num/2;
	}
	x=0;
	for(i=0;i<k;i++)
	{
		x=x+a[i]*pow(2,(k-i-1));
	}
	return x;
}
int main()
{
	int t,k,i,x,len;
	char s[1000005],ans[1000005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		scanf("%s",s);
		len=strlen(s);
		for(i=0;i<pow(2,k);i++)
		{
			x=bin(i,k);
			ans[i]=s[x];
		}
		if(len>pow(2,k))
		{
			i=pow(2,k);
			while(i!=len)
			{
				ans[i++]=s[i];
			}
		}
		for(i=0;i<len;i++)
			printf("%c",ans[i]);
		printf("\n");
	}
	return 0;
}