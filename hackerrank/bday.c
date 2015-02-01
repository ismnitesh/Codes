#include<stdio.h>
int main()
{
	float n,num,total;
	float ans;
	int i;
	scanf("%f",&n);
	total=0;
	for(i=0;i<n;i++)
	{
		scanf("%f",&num);
		total=total+num;
	}
	ans=total/2;
	printf("%0.1f",ans);
	return 0;
}