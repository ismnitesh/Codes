#include<stdio.h>
#include<conio.h>
int main()
{int i,n;
printf("enter any number\n");
scanf("%d",&n);
for(i=0;i<11;i++)
printf("%d*%d = %d\n",n,i,(n*i));
getch();
return 0;
}
