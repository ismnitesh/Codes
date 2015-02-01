#include<stdio.h>
#include<math.h>
int main()
{
	long long int a,b,i,count;
	scanf("%lld%lld",&a,&b);
	if(a==b)
	{
		printf("infinity");
	}
	else
	{
	a=a-b;
	count=0;
	for(i=b+1;i<=a;i++)
	{
		if(a%i==0)
			count++;
	}
	printf("%lld",count);
}
	return 0;
}