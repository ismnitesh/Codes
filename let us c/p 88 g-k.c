#include<stdio.h>
#include<conio.h>
int main()
{int d,m;
printf("enter date of birth and month as integer\n");
scanf("%d%d",&d,&m);
if((m==12 && d>=22)||(m==1 && d<=19))
printf("your zodiac sign is capricorn\n");
else if((m==1 && d>=20)||(m==2 && d<=17))
printf("your zodiac sign is aquarius\n");
else if((m==2 && d>=18)||(m==3 && d<=19))
printf("your zodiac sign is pisces\n");
else if((m==3 && d>=20)||(m==4 && d<=19))
printf("your zodiac sign is aries\n");
else if((m==4 && d>=20)||(m==5 && d<=20))
printf("your zodiac sign is taurus\n");
else if((m==5 && d>=21)||(m==6 && d<=20))
printf("your zodiac sign is gemini\n");
else if((m==6 && d>=21)||(m==7 && d<=22))
printf("your zodiac sign is cancer\n");
else if((m==7 && d>=23)||(m==8 && d<=22))
printf("your zodiac sign is leo\n");
else if((m==8 && d>=23)||(m==9 && d<=22))
printf("your zodiac sign is virgo\n");
else if((m==9 && d>=23)||(m==10 && d<=22))
printf("your zodiac sign is libra\n");
else if((m==10 && d>=23)||(m==11 && d<=21))
printf("your zodiac sign is scorpio\n");
else if((m==11 && d>=22)||(m==12 && d<=21))
printf("your zodiac sign is sagittarius\n");
getch();
return 0;
}
