#include<stdio.h>
int main()
{
	int n,r,c,pr,pc,i,j;
	char a[105][105];
	scanf("%d",&n);
	scanf("%d",&r);
	scanf("%d",&c);
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%c",&a[i][j]);
			if(a[i][j]=='p')
			{
				pr=i;
				pc=j;
			}
		}
	}
	if(pc<c)
		printf("LEFT\n");
	else if(pc>c)
		printf("RIGHT\n");
	else if(pr<r)
		printf("UP\n");
	else
		printf("DOWN\n");
	return 0;
}