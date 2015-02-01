#include<stdio.h>
#include<conio.h>
int main()
{
	int i=2;
	#ifdef DEF
		i*=i;
	#else
	    printf("%d",i);
	#endif
	getch();
	return 0;
}
