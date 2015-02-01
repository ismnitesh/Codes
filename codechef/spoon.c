#include<stdio.h>
int main()
{
	int t,i,j,n,m;
	char s[105][105];
	scanf("%d",&t);
	while(t--)
	{
		int flag=0;
		scanf("%d%d",&m,&n);
		for(i=0;i<m;i++)
			for(j=0;j<n;j++)
				scanf(" %c",&s[i][j]);
			for(i=0;i<m;i++)
			{
				for(j=0;j<n-4;j++)
				{
					if((s[i][j]=='s'||s[i][j]=='S')&&(s[i][j+1]=='p'||s[i][j+1]=='P')&&(s[i][j+2]=='o'||s[i][j+2]=='O')&&(s[i][j+3]=='o'||s[i][j+3]=='O')&&(s[i][j+4]=='n'||s[i][j+4]=='N'))
					{
						flag++;
						break;
					}
				}
			}
		for(i=0;i<n;i++)
		{
			for(j=0;j<m-4;j++)
			{
				if((s[j][i]=='s'||s[j][i]=='S')&&(s[j+1][i]=='p'||s[j+1][i]=='P')&&(s[j+2][i]=='o'||s[j+2][i]=='O')&&(s[j+3][i]=='o'||s[j+3][i]=='O')&&(s[j+4][i]=='n'||s[j+4][i]=='N'))
				{
					flag++;
					break;
				}
			}
		}
		if(flag==0)
			printf("There is indeed no spoon!\n");
		else
			printf("There is a spoon!\n");
	}
	return 0;
}