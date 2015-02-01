#include<stdio.h>
int main()
{
    int n,a[200008],i,x,y,temp,k=0,b[100005][2],flag1,flag2;
	long long int sum1,sum2;
	long long int min=999999999,max=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
	while(1)
	{
		sum1=0;
		sum2=0;
		for(i=1;i<=n;i++)
		{
		//	printf("%d ",a[i]);
			if(i<=n/2)
				sum1=sum1+a[i];
			else if(i>n/2)
				sum2=sum2+a[i];
		}
		if(sum1>sum2)
			flag1=1;
		else
			flag1=0;
	//	printf("\n");
	//	printf("%d\n",sum1-sum2);
	//	printf("s1=%lld s2=%lld\n",sum1,sum2);
		if(sum1==sum2)
			break;
		else if(sum1<sum2)
		{
			for(i=1;i<=n/2;i++)
			{
				if(min>a[i])
				{
					min=a[i];
					x=i;
				}
			}
			b[k][0]=x;
			b[k][1]=n;
			k++;
	//		printf("1\n");
	//		printf("k=%d\n",k);
	//		printf("%d %d\n",x,y);
			temp=a[x];
			for(i=x;i<n;i++)
				a[i]=a[i+1];
			a[n]=temp;
		}
		else
		{
			for(i=1;i<=n/2;i++)
			{
				if(max<a[i])
				{
					max=a[i];
					x=i;
				}
			}
			b[k][0]=x;
			b[k][1]=n;
			k++;
	//		printf("k=%d\n",k);
	//		printf("%d %d\n",x,y);
			temp=a[x];
			for(i=x;i<n;i++)
				a[i]=a[i+1];
			a[n]=temp;	
		}
		for(i=1;i<=n;i++)
		{
		//	printf("%d ",a[i]);
			if(i<=n/2)
				sum1=sum1+a[i];
			else if(i>n/2)
				sum2=sum2+a[i];
		}
		if(sum1>sum2)
			flag2=1;
		else
			flag2=0;
		if(flag1!=flag2)
			break;
	}
	if(k==1 || k==0 || k==2)
		printf("0\n");
	else
	{
		printf("%d\n",k-2);
		for(i=0;i<k-2;i++)
			printf("%d %d\n",b[i][0],b[i][1]);
	}
	return 0;
}