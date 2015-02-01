#include<stdio.h>
char b[255];
int rem(int a)
{
	int p=0,i;
	for(i=0;b[i]!='\0';i++)
		p=((b[i]-'0')+p*10)%a;
	return p;
}
int gcd(int a,int b)
{
	if(b==0)
		return a;
	else
		return gcd(b,a%b);
}
int main()
{
	int t,a,r;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %s",&a,&b);
		if(a==0)
			printf("%s\n",b);
		else
		{
			r=rem(a);
			printf("%d\n",gcd(a,r));
		}
	}
	return 0;
}