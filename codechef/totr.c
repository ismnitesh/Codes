#include<stdio.h>
int func(char x)
{
	int d;
	d=x;
	return d;
}
int main()
{
	int t,i;
	char a[27],b[103];
	scanf("%d%s",&t,a);
	while(t--)
	{
		scanf("%s",b);
		i=0;
		while(b[i]!='\0')
		{
			if(b[i]=='_')
				printf(" ");
			else if(func(b[i])<123 && func(b[i])>96)
				printf("%c",a[func(b[i])-97]);
			else if(func(b[i])>64 && func(b[i])<91)
				printf("%c",a[func(b[i])-65]-32);
			else
				printf("%c",b[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
}