#include<stdio.h>
#include<string.h>
char s[205];
int a[256]={0};
int main()
{
	int t,i,c,y;
	scanf("%d",&t);
	while(t--)
	{
	c=0;
	scanf("%s",s);
	y=strlen(s);
	for(i=0;i<y;i++)
	{
	int w=s[i];
	a[w]++;
    }
	for(i=65;i<=122;i++)
	{
	if(a[i]!=0)
	{
		c=c+((a[i]/2)+(a[i]%2));
		a[i]=0;
	}
	}
	printf("%d\n",c);
    }
return 0;
}