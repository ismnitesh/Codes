//https://www.hackerrank.com/contests/w7/challenges/chocolate-in-box
#include<stdio.h>
int main()
{
	int n,i,flag,a,b;
	scanf("%d",&n);
	flag=0;
	scanf("%d",&a);
	for(i=2;i<=n;i++)
	{
		scanf("%d",&b);
		if(a!=b)
		{	
			flag=1;
		}
		a=b;
	}
	if(flag==0 && n%2==0)
		printf("0\n");
	else if(flag==0 && n%2!=0)
		printf("%d\n",n);
	else
		printf("%d\n",n-1);
	return 0;
}