#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float a,b,c,s,area;
	printf("enter sides of triangle\n");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangle is %f\n",area);
	getch();
	return 0;
}
