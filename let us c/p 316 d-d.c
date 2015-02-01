#include<stdio.h>
#include<conio.h>
int main()
{
	int a[25],n=0,p=0,z=0,e=0,o=0,i;
	printf("enter 25 numbers\n");
	for(i=0;i<25;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)
		z++;
		if(a[i]>0)
		p++;
		if(a[i]<0)
		n++;
		if(a[i]%2==0)
		e++;
		if(a[i]%2!=0)
		o++;
	}
	printf("number of zeros is %d\npositive is %d\nnegative is %d\nevan is %d\nodd is %d\n",z,p,n,e,o);
	getch();
	return 0;
}
