#include<stdio.h>
#include<conio.h>
int main()
{	int year;
	printf("enter year");
	scanf("%d",&year);
		if(year%4==0)
		printf("%d is leap year",year);
		else
		printf("%d is not leap year",year);
 getch();
 return 0;
}
