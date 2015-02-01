#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c;
	printf("enter any value\n");
	scanf("%d",&a);
	if(a>=400)
	{
		b=300;
	    c=200;
    }
	printf("%d\t%d\t%d\n",a,b,c);
	getch();
	return 0;
}
