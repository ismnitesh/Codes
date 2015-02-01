#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char a[101]={0};
	int t,i,j,l,count;
	scanf("%d",&t);
	for(j=0;j<t;j++)
	{
		for(i=0;i<101;i++)
		{
		    a[i]=0;
		}
		scanf("%s",a);
		l=strlen(a);
		count=0;
     	for(i=0;i<l;i++)
		{
			if(a[i]==66)
			{
			    count=count+2;
			}
			else if(a[i]==65||a[i]==68||a[i]==79||a[i]==80||a[i]==81||a[i]==82)
			{
			    count=count+1;
			}
		}
		printf("%d\n",count);
	}
	getch();
	return 0;
}
