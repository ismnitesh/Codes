#include<stdio.h>
#include<string.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,a,n,i;
	char s[252];
	scanf("%d",&t);
	while(t--)
	{
		int b=0;
		scanf("%d%s",&a,s);
		n=strlen(s);

		if(a==0)
		{
			printf("%s\n",s);
		}
		else
		{
			for(i=0;i<n;i++)
			{
				b=(b*10+s[i]-48)%a;
			}
			printf("%d\n",gcd(a,b));
		}
	}
	return 0;
}