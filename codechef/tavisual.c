#include<stdio.h>
#define MAX 100010
int arr[MAX];
int main()
{
int tt,n,c,q,i,l,r,temp;
scanf("%d",&tt);
while(tt--)
{
scanf("%d %d %d",&n,&c,&q);
for(i=1;i<=n;++i)
arr[i]=0;
arr[c]=1;
 
while(q--)
{
scanf("%d %d",&l,&r);
if(l<=c && c<=r)
{
temp=arr[c];
arr[c]=arr[r+l-c];
arr[r+l-c]=temp;
c=r+l-c;
}}
 
for(i=1;i<=n;++i)
if(arr[i])
{
printf("%d\n",i);
break;
}}
return 0;
}