#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int a,b,d,c;
	for(a=1;a<31;a++)
	{
		for(b=1;b<31;b++)
	{	if((a*a)+(b*b)<=900)
		{
			c=sqrt((a*a)+(b*b));
		}
		if((a*a)+(b*b)==(c*c))
		{
			printf("%d\t%d\t%d\n",a,b,c);
		}}
	}
	getch();
	return 0;
}
