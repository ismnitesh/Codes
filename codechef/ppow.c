#include<stdio.h>
int main()
{
	int t,carry,m,i,j,value,a,b,sum,k;
	int arr[40005];
	scanf("%d",&t);
	for(k=1;k<=t;k++)
	{
		for(j=0;j<=40005;j++)
			arr[j]=0;
		scanf("%d%d",&a,&b);
		if(b==0)
			printf("Case %d: 1\n",k);
		else
		{
			arr[0]=1;
			m=1;
			carry=0;
			value=0;
			i=1;
			while(i<=b)
			{
				carry=0;
				for(j=0;j<m;j++)
				{
					value=arr[j]*a+carry;
					arr[j]=value%10;
					carry=value/10;
				}
				if(carry!=0)
				{
					while(carry!=0)
					{
						m=m+1;
						arr[j++]=carry%10;
						carry=carry/10;
					}
				}
				i++;
			}
			sum=0;
			for(i=m-1;i>=0;i--)
			{
				printf("%d",arr[i]);
				sum=sum+arr[i];
			}
			printf("Case %d: %d\n",k,sum);
		}
	}
	return 0;
}