#include<stdio.h>
int main()
{
  int i,j,k,num,temp,a[1004];
  scanf("%d",&num);
  for(i=0;i<num;i++)
      scanf("%d",&a[i]);
  for(i=1;i<num;i++)
  {
      temp=a[i];
      j=i-1;
      while((temp<a[j])&&(j>=0))
      {
          a[j+1]=a[j];
          j=j-1;
      }
      a[j+1]=temp;
      for(k=0;k<num;k++)
      printf("%d ",a[k]);
      printf("\n");
  }
  return 0;
}