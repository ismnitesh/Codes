#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	int n,q,i;
	scanf("%d %d",&n,&q);
	char a[n][22],c[n];
	while(n--)
	{
		i=0;
		scanf("%s",a[i]);
		i++;
	}
	int z;
	while(q--)
	{
		char op[20];
		gets(op);
		switch(op[0])
		{
			case 'A':
				i=7;
				while(op[i]!='\0')
				{
					c[i-7]=a[i];
					i++;
				}
				c[i-7]='\0';
				z=atoi(c);
		}
	}
	printf("%d",z);
	getch();
	return 0;
}
