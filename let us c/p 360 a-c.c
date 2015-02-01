#include<stdio.h>
#include<conio.h>
#include<string.h>
int main ()
{
	char s[]="no two viruse work similarly";
	int i=0;
	while(s[i]!=0)
	{
		printf("%c%c\n",s[i],*(s+i));
		printf("%c%c\n",i[s],*(i+s));
		i++;
	}
	getch();
	return 0;
}
