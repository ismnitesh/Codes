#include<stdio.h>
int main()
{
	int t,n,m,k,i,j,z;
	scanf("%d",&t);
	char s[]="GCAT";
	while(t--)
	{
		scanf("%d%d%d",&n,&m,&k);
		
		
			z=0;
			for(i=0;i<n;i++)
			{
				for(j=0;j<m;j++)
				{
					printf("%c",s[z%4]);
				}
				z++;
				printf("\n");
			}	
		
	}
	return 0;
}