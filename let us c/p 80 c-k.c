#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{int xc,yc,x,y,r,d1,d2,d;
printf("enter co-ordinate of center of circle\n");
scanf("%d%d",&xc,&yc);
printf("enter radius of circle\n");
scanf("%d",&r);
printf("enter co-ordinate of point\n");
scanf("%d%d",&x,&y);
d1=pow((y-yc),2);
d2=pow((x-xc),2);
d=sqrt(d1+d2);
if(d<r)
printf("point is inside circle");
if(d==r)
printf("point is on the circle");
if(d>r)
printf("point is outside the circle");
getch();
return 0;
}
