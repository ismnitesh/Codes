#include<stdio.h>
#include<string.h>
int main()
{
	int i,l,z,x,flag;
	char s[100006];
	scanf("%s",s);
	l=strlen(s);
	flag=0;
	for(i=0;i<l;i++)
	{
		if((s[i]-'0')%2==0)
		{
			z=i;
			flag=1;
		}
	}
	if(flag==0)
		printf("-1");
	else
	{
		flag=0;
		for(i=0;i<l-1;i++)
		{
			if((s[i]-'0')%2==0 && s[i]<s[l-1])
			{
				x=i;
				flag=1;
				break;
			}
		}
		if(flag)
		{
			char tmp=s[x];
			s[x]=s[l-1];
			s[l-1]=tmp;
		}
		else
		{
			char tmp=s[z];
			s[z]=s[l-1];
			s[l-1]=tmp;
		}
		printf("%s",s);
	}
	return 0;
}