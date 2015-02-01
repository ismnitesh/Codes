#include<stdio.h>
#include<string.h>
int main()
{
	char s[100004];
	int l,c1=0,c2=0,c3=0,i,flag=0,x,y,z;
	scanf("%s",s);
	l=strlen(s);
	for(i=0;i<l;i++)
	{
		if(s[i]=='(')
			c1++;
		else if(s[i]==')')
			c2++;
		else if(s[i]=='#')
		{
			c2++;
			c3++;
			s[i]=')';
			x=i;
			y=c1;
			z=c2;
		}
	}
	c1=0;
	c2=0;
	for(i=0;i<l;i++)
	{
		if(s[i]=='(')
			c1++;
		else if(s[i]==')')
			c2++;
		if(c2>c1)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		if((c1-c2)>(y-z))
			flag=1;
	}
	if(flag)
		printf("-1");
	else
	{
		for(i=1;i<c3;i++)
			printf("1\n");
		printf("%d",c1-c2+1);
	}
	return 0;
}