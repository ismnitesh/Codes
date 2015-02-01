#include<stdio.h>
int main()
{
	int n,m,i,j,k;
	long long int a[100004],c[100004];
	scanf("%d%d",&n,&m);
	long long int b[m+5];
	for(i=1;i<=n;i++)
		scanf("%lld",&a[i]);
	for(j=1;j<=m;j++)
		scanf("%lld",&b[j]);
	for(j=1;j<=m;j++)
		scanf("%lld",&c[j]);
	for(i=1;i<=m;i++)
	{	
		k=1;
		j=1;
		while(j<=n)
		{
			j=k*b[i];		
			a[j]=(a[j]*c[i])%1000000007;	
			k++;
		}
	}
	
	for(i=1;i<=n;i++)
		printf("%lld ",a[i]);
	return 0;
}