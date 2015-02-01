#include<stdio.h>
#include<conio.h>
int main()
{	float h,w,b;
printf("enter your weight in kg\n");
scanf("%f",&w);
printf("enter your height in meters\n");
scanf("%f",&h);
	b=(w/(h*h));
if(b<=15)
	printf("starvation");
else if(b>15 && b<=17.5)
	printf("anorexic");
else if(b>17.5 && b<=18.5)
	printf("underweight");
else if(b>18.5 && b<=24.9)
	printf("ideal");
else if(b>24.9 && b<29.9)
	printf("overweight");
else if(b>29.9 && b<=30.9)
	printf("obese");
else if(b>30.9)
	printf("morbidly obese");
getch();
return 0;
}
