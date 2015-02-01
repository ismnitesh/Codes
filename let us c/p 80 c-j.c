#include<stdio.h>
#include<conio.h>
int main()
{int x1,y1,x2,y2,x3,y3;
float s1,s2;
printf("enter co-ordinates of three points\n");
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
if(x1!=x2 || x1!=x3)
{
s1=((y2-y1)/(x2-x1));
s2=((y3-y1)/(x3-x1));
printf("slopes are %d and %d\n",s1,s2);
if(s1==s2)
printf("given three points are colinear\n");
else
printf("points are not colinear\n");
}
if(x1==x2 && x1==x3)
printf("points are colinear");
getch();
return 0;
}
