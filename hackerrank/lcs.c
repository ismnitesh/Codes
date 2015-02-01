#include<stdio.h>
#include<string.h>
int main()
{
	int m,n,i,j;
	int str1[100005],str2[100005],str3[100005];
//	printf("enter two strings\n");
	scanf("%d",&m);
	scanf("%d",&n);
//	scanf("%s",str1);
	for(i=0;i<m;i++)
		scanf("%d",&str1[i]);
	for(i=0;i<n;i++)
		scanf("%d",&str2[i]);
//	scanf("%s",str2);
//	m=strlen(str1);
//	n=strlen(str2);
	int c[m+1][n+1];
	char b[m+1][n+1];
	for(i=0;i<=m;i++)
		c[i][0]=0;
	for(j=1;j<=n;j++)
		c[0][j]=0;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(str1[i-1]==str2[j-1])
			{
				c[i][j]=c[i-1][j-1]+1;
				b[i][j]='T';
			}
			else if(c[i-1][j]>=c[i][j-1])
			{
				c[i][j]=c[i-1][j];
				b[i][j]='U';
			}
			else
			{
				c[i][j]=c[i][j-1];
				b[i][j]='S';
			}
		}
	}
/*	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%d%c ",c[i][j],b[i][j]);
		}
		printf("\n");
	}
	printf("length of lcs is: %d\n",c[m][n]); */
	i=m;
	j=n;
	int k=0;
	while(i!=0 && j!=0)
	{
		if(b[i][j]=='T')
		{
			str3[k]=str1[i-1];
			k++;
			i--;
			j--;
		}
		else if(b[i][j]=='U')
		{
			i--;
		}
		else
		{
			j--;
		}
	}
	str3[k]='\0';
	for(i=k-1;i>=0;i--)
		printf("%d ",str3[i]);
	return 0;
}
