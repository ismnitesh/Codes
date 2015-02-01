#include<stdio.h>
#include<conio.h>
int main()
{int d,n;
printf("enter number of books and late days\n");
scanf("%d%d",&n,&d);
if(d<=5)
printf("fine is %f rupees\n",(n*0.5));
else if(d>5 && d<11)
printf("fine is %d rupees\n",(n));
else if(d>10 && d<=30)
printf("fine is %d rupees\n",(n*5));
else if(d>30)
printf("you are too late your library membership is cancelled");
getch();
return 0;
}
