#include<stdio.h>
int main()
{
int x,y,p;
scanf("%d %d",&x,&y);
if((x-y)%10==9) p=x-y-8;
else p=(x-y)+1;
printf("%d\n",p);
return 0;
}