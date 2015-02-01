#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	float p,s,b,a,vol;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f%f",&p,&s);
		b=(p-sqrt(pow(p,2)-(s*24)))/12;
		a=(p/4)-(b*2);
		vol=a*(pow(b,2));
		printf("%0.2f\n",vol);
	}
	return 0;
}
