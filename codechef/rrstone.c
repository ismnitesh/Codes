#include<stdio.h>
 
int main()
{
	long long int arr[100000],k,max,min,n;
	int i;
	
	scanf("%Ld%Ld",&n,&k);
	
	scanf("%Ld",&arr[0]);
	max=arr[0];
	min=arr[0];
	for(i=1;i<n;i++)
	{	
		scanf("%Ld",&arr[i]);
		if(arr[i]>max)
		max=arr[i];
		else if(arr[i]<min)
		min=arr[i];
	}	
	if(k==0)
	{
		for(i=0;i<n;i++)	
		printf("%Ld ",arr[i]);
	}
	else if(k%2==1)
	{
		for(i=0;i<n;i++)
		printf("%Ld ",max-arr[i]);
	}
	else if(k%2==0)
	{
		for(i=0;i<n;i++)
		printf("%Ld ",arr[i]-min);
	}
	return 0;
}