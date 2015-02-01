#include<stdio.h>
int a1,a2,b1,b2,c1,c2;
long long int s1(int,int,int,long long int);
long long int s2(int,int,int,long long int);
long long int s1(int a1,int b1,int c1,long long int n)
{
	if(n==1)
		return 1;
	else
		return a1*s1(a1,b1,c1,n-1)+b1*s2(a2,b2,c2,n-1)+c1;
}
long long int s2(int a2,int b2,int c2,long long int n)
{
	if(n==1)
		return 2;
	else
		return a2*s1(a1,b1,c1,n-1)+b2*s2(a2,b2,c2,n-1)+c2;
}
int main()
{
	int t;
	long long int n,sam1,sam2;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d%lld",&a1,&b1,&c1,&a2,&b2,&c2);
		sam1=s1(a1,b1,c1,n);
		sam2=s2(a2,b2,c2,n);
		sam1=sam1%1000000007;
		sam2=sam2%1000000007;
		printf("%lld %lld\n",sam1,sam2);
	}
	return 0;
}