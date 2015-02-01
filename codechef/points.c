#include<stdio.h>
#include<math.h>
struct point
{
    int x;
    int y;
};
int cmpfunc (const void * a, const void * b)
{
   int x1 = ((struct point *)a) -> x;
   int y1 = ((struct point *)a) -> y;
   int x2 = ((struct point *)b) -> x;
   int y2 = ((struct point *)b) -> y;
 
   if(x1 > x2)
   {
       return 1;
   }
   else if(x1 == x2 && y1 < y2)
   {
       return 1;
   }
 
   return -1;
}
int main()
{
	int t,i,n;
	struct point a[100005];
	double dis;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i].x,&a[i].y);
		qsort(a,n,sizeof(struct point),cmpfunc);
		dis=0;
		for(i=0;i<n-1;i++)
			dis=dis+sqrt(pow((a[i+1].x-a[i].x),2)+pow((a[i+1].y-a[i].y),2));
		printf("%.2f\n",dis);
	}
	return 0;
}