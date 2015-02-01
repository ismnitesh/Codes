#include<stdio.h>
int fact(int a)
{
	if(a==0)
		return 1;
	else
		return a*fact(a-1);
}

int main()
{
	int n,t,k,p,m,i,j,sum=0;
	scanf("%d%d",&n,&t);
	char str[54],str1[9][6];
	while(t--)
	{
		scanf("%s",str);
		k=0;p=0;m=0;
		for(i=0;i<9;i++)
		{
			m=0;
			for(j=0;j<4;j++)
			{
				str1[i][j]=str[k++];
				if(str1[i][j]=='0')
					m++;	
			}
			for(j=4;j<6;j++)
			{
				str1[i][j]=str[53-p];
				if(str1[i][j]=='0')
					m++;
				p++;
			}
			if(n>m)
				continue;
			else
				sum=sum+(fact(m)/(fact(m-n)*fact(n)));
		}
	}
	printf("%d",sum);
	return 0;
}