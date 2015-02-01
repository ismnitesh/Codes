#include<stdio.h>
#include<conio.h>
int main()
{
	long int n;
	int m,x,y,k,i;
	scanf("%ld %d",&n,&m);
	int a[n];
	for(i=0;i<n;i++)
		    a[i]=0;
	while(m--)
	{
		scanf("%d %d %d",&x,&y,&k);
		for(i=x;i<=y;i++)
		    a[i]=a[i]+k;
	}
	for(i=0;i<n;i++)
	    printf("%d\n",a[i]);
	getch();
	return 0;
}
