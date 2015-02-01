#include<stdio.h>
#include<string.h>
int min(int x,int y)
{
	return x<y?x:y;
}
int main()
{
	int t,i,count,la,lb;
	int a1[130],b1[130];
	char a[10004],b[10004];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<130;i++)
		{
			a1[i]=0;
			b1[i]=0;
		}
		scanf("%s",a);
		scanf("%s",b);
		la=strlen(a);
		lb=strlen(b);
		for(i=0;i<la;i++)
			a1[a[i]]++;
		for(i=0;i<lb;i++)
			b1[b[i]]++;
		count=0;
		for(i=0;i<130;i++)
		{
			count=count+min(a1[i],b1[i]);
		}
		printf("%d\n",count);
	}
	return 0;
}