#include<stdio.h>
int main()
{
	int t;
	float ds,dt,d,min;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f%f%f",&ds,&dt,&d);
		if(d>=ds+dt)
			printf("%f\n",(d-ds-dt));
		else if(ds>=d+dt)
			printf("%f\n",ds-dt-d);
		else if(dt>=d+ds)
			printf("%f\n",dt-ds-d);
		else
			printf("0.00\n");
	}
	return 0;
}