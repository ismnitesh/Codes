#include<stdio.h>
#include<conio.h>
int main()
{int x,y;
printf("enter co-ordinates of any point\n");
scanf("%d%d",&x,&y);
if(x==0 && y!=0)
printf("point is on y-axis\n");
if(x!=0 && y==0)
printf("point is on x-axis\n");
if(x==0 && y==0)
printf("point is on origin\n");
getch();
return 0;
}
