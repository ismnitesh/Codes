#include<stdio.h>
#include<math.h>
int arr[10000005];
int main()
{
	int n,i,j;
	for(i=0;i<10000005;i++)
		arr[i]=1;
	int sq = sqrt(10000004);
	for(i=3;i<=sq;i=i+2)
	{
		if(arr[i]==1)
		{
			for(j=i*i;j<10000004;j=j+2*i)
			{
				if(arr[j]==1)
					arr[j]=i;
			}
		}
	}
	while(scanf("%d",&n)!= EOF)
	{
		if(n==1)
			printf("1\n");
		else{
		printf("1 x ");
		while(1)
		{
			if(n==2)
			{
				printf("2\n");
				break;
			}
			else if(n%2==0)
			{
				printf("2 x ");
				n=n/2;
			}
			else if(arr[n]==1)
			{
				printf("%d\n",n);
				break;
			}
			else
			{
				printf("%d x ",arr[n]);
				n=n/arr[n];
			}
		}
		}
	}
	return 0;
}


