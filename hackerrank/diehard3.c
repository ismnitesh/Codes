#include<stdio.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,a,b,c,g;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d",&a,&b,&c);
		g=gcd(a,b);
		if(c%g!=0 || (c>a && c>b))
			printf("NO\n");
		else if(c==0 || a==c || b==c)
			printf("YES\n");
		else
			printf("YES\n");
	}
	return 0;
}
