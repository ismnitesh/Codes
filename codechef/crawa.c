#include<stdio.h>
int main()
{
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(y>0 && y%2==0 && x>=(-y) && x<y)
			printf("YES\n");
		else if(y==0 && ((x>=0 && x%2==1)||(x<0 && x%2==0)))
			printf("YES\n");
		else if(y<0 && y%2==0 && x>=y && x<=(1-y))
			printf("YES\n");
		else if(x==0 && y%2==0)
			printf("YES\n");
		else if(x<0 && x%2==0 && y<=(-x) && y>=x)
			printf("YES\n");
		else if(x>0 && x%2==1 && y>=(-x+1) && y<=(x+1))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}