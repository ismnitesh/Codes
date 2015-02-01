#include<stdio.h>
int main()
{
	int n,q,m[100004][3],j,k,l,ans,i,c,d,x;
	char a[100005];
	scanf("%d%d",&n,&q);
	scanf("%s",a);
	m[0][0]=0;
	m[0][1]=0;
	m[0][2]=0;
	m[0][(a[0]+'0')%3]++;
	for(i=1;i<n;i++)
	{
		if(((a[i]+'0')%3)==0)
		{
			m[i][0]=m[i-1][0]+1;
			m[i][1]=m[i-1][1];
			m[i][2]=m[i-1][2];
		}
		else if(((a[i]+'0')%3)==1)
		{
			m[i][1]=m[i-1][1]+1;
			m[i][0]=m[i-1][0];
			m[i][2]=m[i-1][2];	
		}
		else if(((a[i]+'0')%3)==2)
		{
			m[i][2]=m[i-1][2]+1;
			m[i][0]=m[i-1][0];
			m[i][1]=m[i-1][1];	
		}
	}
	while(q--)
	{
		scanf("%d%d%d",&x,&c,&d);
		if(x==2)
		{
			if(c==1)
			{
				j=m[d-1][0];
				k=m[d-1][1];
				l=m[d-1][2];
			}
			else
			{
				j=m[d-1][0]-m[c-2][0];
				k=m[d-1][1]-m[c-2][1];
				l=m[d-1][2]-m[c-2][2];
			}
			ans=(j*(j-1)/2)+(k*(k-1)/2)+(l*(l-1)/2);
			printf("%d\n",ans);
		}
	}
	return 0;
}