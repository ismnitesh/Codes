#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int main()
{
	int t,a,j,x;
	long long int b;
	char c[110],s[110];
	int d;

	scanf("%d ",&t);
	while(t--)
	{
		gets(s);
		int i;
		long long int z;
		switch(s[0])
		{
		case 'I':
			i=8;
			while(s[i]!='\0')
			{
				c[i-8]=s[i];
				i++;
			}
			c[i-8]='\0';
			a=atoi(c);
			z=1;
			for(j=a;j>0;j--)
				z=z*j;
			printf("%lld\n",z);
		    break;
		case 'L':
			i=5;z=0;
			while(s[i]!='\0')
			{
				z=z+s[i]-48;
				i++;
			}
			printf("%d\n",z);
			break;
		case 'D':
			i=7;
			int z;
            while(s[i]!='\0' && s[i]!='.')
			{
				c[i-7]=s[i];
				i++;
			}
			c[i-7]='\0';

	        printf("%s\n",c);
	        break;
		case 'S':
			x=strlen(s);
			for(i=x-1;i>6;i--)
			    printf("%c",s[i]);
			printf("\0");
			printf("\n");
			break;
		}
	}
	getch();
	return 0;
}
