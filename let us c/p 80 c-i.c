#include<stdio.h>
#include<conio.h>
int main()
{int l,b,a,p;
printf("enter length and breadth");
scanf("%d%d",&l,&b);
a=l*b;
p=2*(l+b);
if(a>p)
printf("area is greater than perimeter");
else
printf("perimeter is greater than area");
getch();
return 0;
}
