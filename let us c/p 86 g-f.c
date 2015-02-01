#include<stdio.h>
#include<conio.h>
int main()
{float a,b,c,l1,l;
printf("enter sides of triangle\n");
scanf("%f%f%f",&a,&b,&c);
l1=a>b?a:b;
l=l1>c?l1:c;
if(a==b && b==c)
printf("triangle is equilatral\n");
else if(a==b || b==c || a==c)
printf("triangle is isosceles\n");
else if((a*a)+(b*b)+(c*c)==2.0*(l*l))
printf("this is right angled triangle\n");
else
printf("triangle is scalen\n");
getch();
return 0;
}
