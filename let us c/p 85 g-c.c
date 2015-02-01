#include<stdio.h>
#include<conio.h>
int main()
{int h,ts;
float cc;
printf("enter the value of carbon content\n");
scanf("%f",&cc);
printf("enter the values of hardness and tensile strength\n");
scanf("%d%d",&h,&ts);
printf("hardness is %d\ncarbon content is %f\ntensile strength of steel is %d\n",h,cc,ts);
if(h>50 && cc<0.7 && ts>5600)
printf("grade is 10\n");
else if(h>50 && cc<0.7)
printf("grade is 9\n");
else if(cc<0.7 && ts>5600)
printf("grade is 8\n");
else if(h>50 && ts>5600)
printf("grade is 7\n");
else if(h<=50 && cc>=0.7 && ts<=5600)
printf("grade is 5\n");
else
printf("grade is 6\n");
getch();
return 0;
}
