#include<stdio.h>
int dis(int x1,int y1,int x2,int y2)
{
	return ((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main()
{
	int t,x1,x2,x3,y1,y2,y3,big,d1,d2,d3,count=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
		d1=dis(x1,y1,x2,y2);
		d2=dis(x1,y1,x3,y3);
		d3=dis(x2,y2,x3,y3);
		big=(d1>d2&&d1>d3?d1:d2>d3?d2:d3);
		if(big==d1)
			if(d1==d2+d3)
				count++;
		if(big==d2)
			if(d2==d1+d3)
				count++;
		if(big==d3)
			if(d3==d1+d2)
				count++;
	}
	printf("%d\n",count);
	return 0;
}