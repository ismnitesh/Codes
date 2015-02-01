#include<stdio.h>
#include<conio.h>
int main()
{
	int i,a[5],b[5];
	printf("enter 5 numbers\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);            //combination of both loop is not work.why?
	}
	for(i=0;i<5;i++)
	{
		b[i]=a[4-i];
	    printf("%d\t",b[i]);
	}
	getch();
	return 0;
}
