#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,j,l;
	char m[150][25];
	char s[300];
	scanf("%d",&n);
	while(n)
	{
		i=0;
		scanf("%s",s);
		l=strlen(s);
		int r=0,c,k=0;
		for(r=0;r<l/n;r++)
		{
			if(r%2==0)
			{
				for(c=0;c<n;c++)
					m[r][c]=s[k++];
			}
			else
			{
				for(c=n-1;c>=0;c--)
					m[r][c]=s[k++];
			}
		}
		for(i=0;i<n;i++)
			for(j=0;j<l/n;j++)
				printf("%c",m[j][i]);
		printf("\n");
		scanf("%d",&n);
	}
	return 0;
}