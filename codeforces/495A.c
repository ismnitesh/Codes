#include<stdio.h>
int main()
{
	int n,a[10]={2,7,2,3,3,4,2,5,1,2},x,y;
	scanf("%d",&n);
	x=n%10;
	y=n/10;
	printf("%d",a[x]*a[y]);
	return 0;
}