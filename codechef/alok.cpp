#include<stdio.h>
#include<conio.h>
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
int arr[5],i,mini;
for(i=0;i<5;i++)
scanf("%d",&arr[i]);
mini=arr[0];
for(i=1;i<5;i++)
{
if(arr[i]<mini)
mini=arr[i];
}
printf("%d\n",mini);
}
getch();
return 0;
}
