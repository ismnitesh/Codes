#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{ 
	return (*(int *)a - *(int *)b);
}
int main()
{ 
	int t,n,arr[100001],i;
	scanf("%d",&t);
	while(t--)
	{
		int count=1;
		scanf("%d",&n);
		for(i=0;i<n;i++)
 			scanf("%d",&arr[i]);
		qsort(arr,n,sizeof(int),comp);
		for(i=1;i<n;i++)
		{
			if(arr[i]!=arr[i-1])
				count++;
		}
		printf("%d\n",count);
	}
	return 0;
}