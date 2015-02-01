#include<stdio.h>
#include<math.h>
float dis(int a1,int b1,int a2,int b2)
{
	float distance;
	distance=sqrt(pow((a2-a1),2)+pow((b2-b1),2));
	return distance;
}
int main()
{
	int t,a1,b1,a2,b2,a3,b3;
	float d1,d2,d3,d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%f",&d);
		scanf("%d%d%d%d%d%d",&a1,&b1,&a2,&b2,&a3,&b3);
		d1=dis(a1,b1,a2,b2);
		d2=dis(a1,b1,a3,b3);
		d3=dis(a2,b2,a3,b3);
		if(d1<=d)
		{
			if(d2<=d || d3<=d)
			{
				printf("yes\n");
			}
			else
				printf("no\n");
		}
		else
		{
			if(d2<=d && d3<=d)
			{
				printf("yes\n");
			}
			else
			{
				printf("no\n");
			}
		}
	}
	return 0;
}