#include<stdio.h>
#include<conio.h>
int main()
{float a,b,c,lar,lar1,sum;
printf("enter the values of sides\n");
scanf("%f%f%f",&a,&b,&c);
lar1=a>b?a:b;
lar=lar1>c?lar1:c;
sum=(a+b+c-lar);
printf("largest side is %f\n",lar);
if(lar<sum)
printf("triangle is valid\n");
else
printf("triangle is invalid\n");
getch();
return 0;
}
