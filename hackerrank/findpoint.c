#include<stdio.h>
int main()
{
	int t,px,py,qx,qy,rx,ry;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d",&px,&py,&qx,&qy);
		rx=qx+qx-px;
		ry=qy+qy-py;
		printf("%d %d\n",rx,ry);
	}
	return 0;
}