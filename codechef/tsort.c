#include<stdio.h>
#include<stdlib.h>
int comp(const void *a,const void *b)
{ return (*(int *)a - *(int *)b);
}
int main()
{ int t,n,arr[1000001],i;
scanf("%d",&t);
for(i=0;i<t;i++)
 scanf("%d",&arr[i]);
qsort(arr,t,sizeof(int),comp);
for(i=0;i<t;i++)
 printf("%d\n",arr[i]);
return 0;
}