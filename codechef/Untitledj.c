#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int n,q,a,b,i,j;
	scanf("%d%d",&n,&q);
	char str[n][25];
	char temp[25];
	char s[25];
	for(i=0;i<n;i++)
	{
		scanf("%s\n",str[i]);
	}
	while(q--)
	{
		char ts[25];
		gets(ts);
		switch(ts[0])
		{	
			case 'A':
				j=0,i=7;
				while(ts[i]!='\0')
				{
					s[j]=ts[i];
					i++;
					j++;
				}
				s[j]='\0';
				a=atoi(s);
				printf("%s\n",str[a-1]);
				break;
			case 'S':
				j=0,i=5;
				while(ts[i]!=' ')
				{
					s[j]=ts[i];
					i++;
					j++;
				}
				s[j]='\0';
				a=atoi(s);
				j=0;
				i++;
				while(ts[i]!='\0')
				{
					s[j]=ts[i];
					i++;
					j++;
				}
				s[j]='\0';
				b=atoi(s);
				strcpy(temp,str[a-1]);
				strcpy(str[a-1],str[b-1]);
				strcpy(str[b-1],temp);
				break;
		}
	}
	return 0;
}
