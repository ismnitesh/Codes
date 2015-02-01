#include<stdio.h>
#include<conio.h>
int main()
{
	int n;
	while(1)
	{
		scanf("%d",&n);
		if(n==42)
		break;
		printf("%d\n",n);
	}
	getch();
	return 0;

}
