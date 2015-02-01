#include<stdio.h>
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
 
   if(y1 > y2)
   {
       return 1;
   }
   else if(y1 == y2 && x1 < x2)
   {
       return 1;
   }
 
   return -1;
}
int main()
{
	int t,i,n,bomb,count;
	struct point a[100005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=0;i<n;i++)
			scanf("%d%d",&a[i].x,&a[i].y);
			qsort(a,n,sizeof(struct point),cmpfunc);
			count=1;
		bomb=a[0].y;
		for(i=1;i<n;i++)
		{
			if(a[i].x>bomb)
			{
				count++;
				bomb=a[i].y;
			}
		}
		printf("%d\n",count);
	}
	return 0;
}