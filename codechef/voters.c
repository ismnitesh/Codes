#include <stdio.h>
#include <stdlib.h>
 
int main()
{
	int i1,i2,i3,i,n1,n2,n3,n;
	scanf("%d %d %d",&n1,&n2,&n3);
	int arr1[n1],arr2[n2],arr3[n3],arr[n1+n2];
	for(i=0;i<n1;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<n2;i++)
		scanf("%d",&arr2[i]);
	for(i=0;i<n3;i++)
		scanf("%d",&arr3[i]);
	i1=0,i2=0,i3=0,i=0;
	while(i1<n1 && i2<n2)
	{
		if(arr1[i1]==arr2[i2])
		{
			arr[i++]=arr1[i1];
			i1++;
			i2++;
		}
		else if(arr1[i1] < arr2[i2])
		{
			if(i3<n3)
			{
				if(arr1[i1]==arr3[i3])
				{
					arr[i++]=arr1[i1];
					i1++;
					i3++;
				}
				else if(arr1[i1]<arr3[i3])
					i1++;
				else
					i3++;
			}
			else
				i1++;
		}
		else
		{
			if(i3<n3)
			{
				if(arr2[i2]==arr3[i3])
				{
					arr[i++]=arr2[i2];
					i2++;
					i3++;
				}
				else if(arr2[i2]<arr3[i3])
					i2++;
				else
					i3++;
			}
			else
				i2++;
		}
	}
	while(i1<n1 && i3<n3)
	{
		if(arr1[i1]==arr3[i3])
		{
			arr[i++]=arr1[i1];
			i1++;
			i3++;
		}
		else if(arr1[i1]<arr3[i3])
			i1++;
		else
			i3++;
	}
	while(i2<n2 && i3<n3)
	{
		if(arr2[i2]==arr3[i3])
		{
			arr[i++]=arr2[i2];
			i2++;
			i3++;
		}
		else if(arr2[i2]<arr3[i3])
			i2++;
		else
			i3++;
	}
	n=i;
	printf("%d\n",i);
	for(i=0;i<n;i++)
		printf("%d\n",arr[i]);
	return 0;
}