#include<stdio.h>
#include<math.h>
int rev(int n)
{
	int m=0,x=n;
	while(n)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if(m==x)
		return 1;
	else
		return 0;
}
int prime(int a)
{
	int flag=0,i,x;
	x=sqrt(a);
	for(i=2;i<=x;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		return 1;
	else
		return 0;
}
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=n;i<=1500000;i++)
	{
		if(rev(i) && prime(i))
		{
				printf("%d",i);
				break;
		}
	}
	return 0;
}