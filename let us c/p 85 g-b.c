#include<stdio.h>
#include<conio.h>
int main()
{
	char a;
    int b;
printf("enter any character\n");
scanf("%c",&a);
b=a;
printf("ASCII value of entered charecter is %d\n",b);
if(b>=65 && b<=90)
printf("charecter is between A-Z\n");
else if(b>=97 && b<=122)
printf("charecter is between a-z\n");
else if(b>=48 && b<=57)
printf("charecter is between 0-9\n");
else
printf("charecter is special symbol\n");
getch();
return 0;
}
