#include<stdio.h>
#include<conio.h>
int main()
{int w;
printf("enter weight of boxer in pounds\n");
scanf("%d",&w);
if(w<115)
printf("boxer class is flyweight");
else if(w>=115 && w<=121)
printf("boxer class is bantamweight");
else if(w>=122 && w<=153)
printf("boxer class is featherweight");
else if(w>=154 && w<=189)
printf("boxer class is middleweight");
else
printf("boxer is heavyweight");
getch();
return 0;
}
