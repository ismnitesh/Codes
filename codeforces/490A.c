#include<stdio.h>
int min(int a,int b)
{
	if(a<b) return a;
	else return b;
}
int main()
{
	int n,a[3][5003],k,l,m,x,num,i;
	scanf("%d",&n);
	k=0;
	l=0;
	m=0;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&num);
		if(num==1)
			a[0][k++]=i;
		else if(num==2)
			a[1][l++]=i;
		else if(num==3)
			a[2][m++]=i;
	}
	x=min(k,l);
	x=min(x,m);
	printf("%d\n",x);
	for(i=0;i<x;i++)
		printf("%d %d %d\n",a[0][i],a[1][i],a[2][i]);
	return 0;
}