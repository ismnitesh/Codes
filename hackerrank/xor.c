#include<stdio.h>
int main()
{
	int i,j,a,b,max;
	scanf("%d%d",&a,&b);
	max=0;
	for(i=a;i<=b;i++)
	{
		for(j=a;j<=b;j++)
		{
			if((i^j)>max)
				max=(i^j);
		}
	}
	printf("%d\n",max);
	return 0;
}