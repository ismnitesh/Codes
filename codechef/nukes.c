#include<stdio.h>
#include<math.h>
long long int a;
int main()
{
	int n,k,i,j,b[100]={0},y;
	scanf("%lld %d %d",&a,&n,&k);
	y=pow(n+1,k);
	a=a%y;
		for(j=0;j<k;j++)
		{
			b[j]=a%(n+1);
			a=a/(n+1);
			}
		for(i=0;i<k;i++)
		 printf("%d ",b[i]);
}