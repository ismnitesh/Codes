#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,c1,c2,c3,count;
	char s[105];
	scanf("%s",s);
	l=strlen(s);
	c1=0;
	c2=0;
	c3=0;
	for(i=0;i<l;i+=2)
	{
		if(s[i]=='1')
			c1++;
		else if(s[i]=='2')
			c2++;
		else if(s[i]=='3')
			c3++;
	}
	count=0;
//	printf("%d %d %d\n",c1,c2,c3);
	for(i=0;i<l;i+=2)
	{
		if(count<c1)
		{
			s[i]='1';
			count++;
		}
		else if(count<(c1+c2))
		{
			s[i]='2';
			count++;
		}
		else
		{
			s[i]='3';
			count++;
		}
	}
	printf("%s",s);
	return 0;
}