#include<stdio.h>
int main()
{
	int count=1;
	float num,sum=0.5;
	scanf("%f",&num);
	while(num!=0.0)
	{
		count=1;
		sum=0.5;
		while(num>sum)
		{
			count++;
			sum=sum+(1.0/((count*1.0)+1.0));
		//	printf("%d\n",count);
		}
		printf("%d card(s)\n",count);
		scanf("%f",&num);
	}
	return 0;
}