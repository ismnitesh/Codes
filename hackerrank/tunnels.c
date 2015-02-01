#include<stdio.h>
#include<math.h>
double fun(double c,double d,double e,double f,double a)
{
	return c*a*a*a+d*a*a+e*a+f;
}
int main()
{
	int k;
	double x,a,b,c,d,e,f,fa,fb,fx;
	scanf("%lf%lf%lf%lf%lf%lf",&c,&d,&e,&f,&a,&b);
	x=(a+b)/2.0;
	k=25;
	while(k--)
	{
		fa=fun(c,d,e,f,a);
		fb=fun(c,d,e,f,b);
		fx=fun(c,d,e,f,x);
		if((fa<0.0 && fx<0.0) || (fa>0.0 && fx>0.0))
		{
			a=x;
			x=(a+b)/2.0;
		}
		else if((fb<0.0 && fx<0.0) || (fb>0.0 && fx>0.0))
		{
			b=x;
			x=(a+b)/2.0;
		}
	}
	printf("%.4lf\n",x);
	return 0;
}