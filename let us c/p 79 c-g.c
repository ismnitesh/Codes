#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c;
printf("enter angels of triangle");
scanf("%d%d%d",&a,&b,&c);
if(a+b+c==180)
printf("triangle is valid");
else
printf("triangle is invalid");
getch();
return 0;
}
