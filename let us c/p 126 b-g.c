#include<stdio.h>
#include<conio.h>
int main()
{
	int a,p=0,n=0,z=0;
	char c;
do
{
	printf("enter any number\n");
	scanf("%d",&a);
if(a==0)
z=z+1;
else if(a>0)
p=p+1;
else if(a<0)
n=n+1;
printf("want to enter another number y/n");
scanf("%c",&c);
}while(c!='n');
printf("zeros %d\npositive %d\nnegetive %d\n",z,p,n);
getch();
return 0;
}
