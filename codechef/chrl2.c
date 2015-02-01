#include<stdio.h>
#include<string.h>
char a[100001];
long int i,C=0,CH=0,CHE=0,CHEF=0,n;
 
int main()
{
	scanf("%s",a);
	n=strlen(a);
	for(i=0;i<n;i++)
	{
		switch(a[i])
		{
			case 'C':
				a[i]='s';
				C++;
				break;
			case 'H':
				if(C>CH){CH++;}
				a[i]='s';
				break;
			case 'E':
				if(CH>CHE){CHE++;}
				a[i]='s';
				break;
			case 'F':
				if(CHE>CHEF){CHEF++;}
				a[i]='s';
				break;
			default:
				a[i]='s';
		}
 
	}
	printf("%ld\n",CHEF);
	return 0;
}