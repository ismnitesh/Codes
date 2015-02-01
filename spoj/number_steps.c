#include<stdio.h>
int main()
{
	int t,x,y;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(y!=x && y!=x-2)
			printf("No Number\n");
		else if(x%2==0 )
		{
				printf("%d\n",x+y);
		}
		else
			printf("%d\n",x+y-1);
	}
	return 0;
}