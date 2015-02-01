#include<stdio.h>
#include<conio.h>
int main()
{int a,b,c=1;
printf("enter two numbers\n");
scanf("%d%d",&a,&b);
while(b>=1)
{c=c*a;
b--;
}
printf("answer is %d\n",c);
getch();
return 0;
}
