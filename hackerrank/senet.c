#include<stdio.h>
char counter(char c)
{
	if(c=='X')
		return 'O';
	else
		return 'X';
}
int next_i(int a,int b,int n)
{
	if(b+n<=9)
		return a;
	else if(b+n>9)
		return a+1;
}
int next_j(int a,int b,int n)
{
	if(b+n<=9)
		return b+n;
	else if(b+n>9)
		return b+n-10;
}
int main()
{
	int n,b[5][2],i,j,next[5][2],point[5]={0},z,max=0,final=0;
	char c,c1,a[3][14]={0};
	scanf("%c",&c);
	c1=counter(c);
	scanf("%d",&n);
	scanf("%s",a[0]);
	scanf("%s",a[1]);
	scanf("%s",a[2]);
	int k=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<10;j++)
		{
			if(a[i][j]==c)
			{
				b[k][0]=i;
				b[k][1]=j;
				k++;
			}
		}
	}
	//printf("%d\n",k);
	for(z=0;z<k;z++)
	{
		next[z][0]=next_i(b[z][0],b[z][1],n);
		next[z][1]=next_j(b[z][0],b[z][1],n);
		if(a[next[z][0]][next[z][1]-1]=='c1' && a[next[z][0]][next[z][1]+1]=='c1')
		{
			point[z]=-1;
			continue;
		}
		if(a[next[z][0]][next[z][1]-1]=='.')
			point[z]++;
		if(a[next[z][0]-1][next[z][1]]=='.')
			point[z]++;
		if(a[next[z][0]+1][next[z][1]]=='.')
			point[z]++;
		if(a[next[z][0]][next[z][1]+1]=='.')
			point[z]++;
		if(a[next[z][0]-1][next[z][1]]!='.' && a[next[z][0]+1][next[z][1]]!='.' && a[next[z][0]][next[z][1]-1]!='.' && a[next[z][0]][next[z][1]+1]!='.')
			point[z]=5;

	//	printf("%d ",point[z]);
	//	printf("\n");
		if(point[z]>max)
		{
			max=point[z];
			final=z;
		}
	}
	printf("%d\n",b[final][0]*10+b[final][1]+1);
	return 0;
}