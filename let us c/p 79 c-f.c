#include<stdio.h>
#include<conio.h>
int main()
{   int r,s,a;
	printf("enter age of ram shyam and ajay");
	scanf("%d%d%d",&r,&s,&a);
	if(r>s)
	    {if(s>a)
	    printf("ajay is youngest");
	    else
	    printf("shyam is youngest");
	}
	else if(r<a)
	printf("ram is youngest");
getch();
return 0;
}
