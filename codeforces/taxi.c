#include<stdio.h>
int main()
{
	int n,a1,a2,a3,a4,count,num;
	a1=0;
	a2=0;
	a3=0;
	a4=0;
	count=0;
	scanf("%d",&n);
	while(n--)
	{
		scanf("%d",&num);
		if(num==1)
			a1++;
		else if(num==2)
			a2++;
		else if(num==3)
			a3++;
		else if(num==4)
			a4++;
	}
	count=count+(a2/2);
	a2=a2%2;
	count=count+a4;
	if(a1>=a3)
	{
		count=count+a3;
		a1=a1-a3;
	}
	else
	{
		count=count+a3;
		a1=0;
	}
	if(a2==1)
	{
		count++;
		a1=a1-2;
	}
	if(a1>0)
	{
		count=count+(a1/4);
		a1=a1%4;
	}
	if(a1>0)
		count++;
	printf("%d",count);
	return 0;
}