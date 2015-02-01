#include<stdio.h>
int main()
{
	int n,x,a[52][2],count=0,i,t;
	scanf("%d%d",&n,&x);
	for(i=0;i<n;i++)
		scanf("%d%d",&a[i][0],&a[i][1]);
	int pos=1;
	for(i=0;i<n;i++)
	{
		t=a[i][0]-pos;
		pos=pos+(x*(t/x));
		count=count+a[i][1]-pos+1;
	//	printf("%d",count);
		pos=a[i][1]+1;
	}
	printf("%d",count);
	return 0;
}