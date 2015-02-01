#include<stdio.h>
int main()
{
	int t,ti,no,a1[105],a2[105],i;
	char te,col,t1[25],t2[25];
	scanf("%s",t1);
	scanf("%s",t2);
	scanf("%d",&t);
	for(i=0;i<105;i++)
	{
		a1[i]=0;
		a2[i]=0;
	}
	while(t--)
	{
		scanf("%d %c %d %c",&ti,&te,&no,&col);
		if(col=='r')
		{
			if(te=='h')
				printf("%s %d %d\n",t1,no,ti);
			else
				printf("%s %d %d\n",t2,no,ti);
		}
		else
		{
			if(te=='h')
			{
				a1[no]++;
				if(a1[no]==2)
				{
					printf("%s %d %d\n",t1,no,ti);
				}
			}
			else
			{
				a2[no]++;
				if(a2[no]==2)
					printf("%s %d %d\n",t2,no,ti);	
			}
		}
	}
	return 0;
}