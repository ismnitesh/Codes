#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	float x,y,r,a;
	printf("enter co-ordinate of any point in first quadrent");
	scanf("%f%f",&x,&y);
	r=sqrt((x*x)+(y*y));
	a=(atan(y/x))*180.0*7.0/22.0;
	printf("point in polar co-ordinte is (%f,%f)\n",r,a);
	getch();
	return 0;
}
