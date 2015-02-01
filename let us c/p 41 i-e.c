#include<stdio.h>
#include<conio.h>
int main()
{
	int l,b,r,ar,pr;
	float ac,cc;
	printf("enter length and breadth of rectangle\n");
	scanf("%d%d",&l,&b);
	printf("enter radius of circle\n");
	scanf("%d",&r);
	ar=l*b;
	pr=2*(l+b);
	ac=(3.14)*(r*r);
	cc=2*(3.14)*r;
	printf("area of rectangle is %d\nperimeter of rectangle is %d\narea of circle is %f\ncircumference of circle is %f\n",ar,pr,ac,cc);
	getch();
	return 0;
}
