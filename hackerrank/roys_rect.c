#include<stdio.h>
int main()
{
	int t,x,y,x1,y1,x2,y2,dx,dy,dx1,dx2,dy1,dy2,ans;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&x,&y,&x1,&y1,&x2,&y2);
		dx1=x-x1;
		dx2=x2-x;
		dy1=y-y1;
		dy2=y2-y;
		dx=dx1<dx2?dx1:dx2;
		dy=dy1<dy2?dy1:dy2;
		ans=dx<dy?dx:dy;
		printf("%d\n",ans);
	}
	return 0;
}