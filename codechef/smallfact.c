#include<stdio.h>
int main()
{
	int m=0,a[200],carry,value,num,j,n,x;
	scanf("%d",&n);
	if(n>=1 && n<=100)
	{
		for(x=0;x<n;x++)
		{
			scanf("%d",&num);
			a[0]=1;
			m=1;
			carry=0;
			value=0;
			int i=1;
			while(i<=num)
			{
				carry=0;
				for(j=0;j<m;j++)
				{
					value=a[j]*i+carry;
					a[j]=value%10;
					carry=value/10;
				}
				if(carry!=0)
				{
					while(carry!=0)
					{
						m=m+1;
						a[j++]=carry%10;
						carry=carry/10;
					}
				}
				i++;
			}
			for(i=m-1;i>=0;i--)
				printf("%d",a[i]);
			printf("\n");
		}
	}
	return 0;
}