#include<stdio.h>
int main()
{
	int n,i,j;
	float r[1002],m[1002],t[1002],marks=0.00,tm,ti;
	scanf("%d%f",&n,&ti);
	for(i=0;i<n;i++)
	{
		scanf("%f",&m[i]);
	}
	for(i=0;i<n;i++)
	{
		scanf("%f",&t[i]);
	}
	for(i=0;i<n;i++)
	{
		r[i]=m[i]/t[i];
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n-1;i++)
		{
			if(r[i]<r[i+1])
			{
				tm=r[i];
				r[i]=r[i+1];
				r[i+1]=tm;


				tm=m[i];
				m[i]=m[i+1];
				m[i+1]=tm;


				tm=t[i];
				t[i]=t[i+1];
				t[i+1]=tm;
			}
		}
	}
		
		
			float count=0.00;
			m[0]=2.0*m[0];
			for(i=0;i<n;i++)
			{
				count=count+t[i];
				if(count>ti)
					break;
				marks=marks+m[i];
			}
			int mar=marks;
			printf("%d\n",mar);
	return 0;
}