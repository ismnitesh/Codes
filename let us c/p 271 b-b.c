#include<stdio.h>
#include<conio.h>
#define PRODUCT(x) (x*x)
int main()
{
	int i=3,j,k,l;
	j=PRODUCT(i+1);
	k=PRODUCT(i++);
	l=PRODUCT(++i);
	printf("%d\t%d\t%d\t%d\n",i,j,k,l);
	getch();
	return 0;
}
