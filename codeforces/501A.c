#include<stdio.h>
int max(int a,int b)
{
	if(a>b)
		return a;
	else
		return b;
}
int main()
{
	int a,b,c,d,m,v;
	scanf("%d%d%d%d",&a,&b,&c,&d);
	m=max(3*(a/10),a-(a/250)*c);
	v=max(3*(b/10),b-(b/250)*d);
	if(m>v)
		printf("Misha\n");
	else if(v>m)
		printf("Vasya\n");
	else
		printf("Tie\n");
	return 0;
}