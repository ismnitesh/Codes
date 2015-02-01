#include<stdio.h>
#include<math.h>
int main()
{
	int num;
	double area;
	while(1)
	{
		scanf("%d",&num);
		if(num==0)
			return 0;
		else
		{
			area=(num*num)/(2*M_PI);
			printf("%0.2lf\n",area);
		}
	}
	return 0;
}
