#include<stdio.h>
#include<conio.h>
int main()
{int d;
char c;
d=0;
while(d<=255)
{   c=d;
	printf("%d\t%c\t",d,c);
	d++;
}
getch();
return 0;
}
