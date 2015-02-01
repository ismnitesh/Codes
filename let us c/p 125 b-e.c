#include<stdio.h>
#include<conio.h>
int main()
{int num=1,c,x,y,z,num1=1;
while(num1<=500)
{num=num1;
x=num%10;
num=num/10;
y=num%10;
num=num/10;
z=num%10;
c=(x*x*x)+(y*y*y)+(z*z*z);
if(num1==c)
printf("%d\n",c);
num1++;
}
getch();
return 0;
}
