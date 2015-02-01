#include<stdio.h>
#include<string.h>
int main()
{
	int j,q,i,length=0,len=0,index;
	char s[100000],x[100000];
	char qtype;
	scanf("%d",&q);
	//while(q--)
	for(j=0;j<q;j++)

	{
		
		
	
		scanf(" %c",&qtype);
		
		if(qtype=='+')
		{
				scanf("%d",&index);
				scanf("%s",x);
				len=strlen(x);
				length=strlen(s);
				if(length==0)
				{
					for(i=0;i<len;i++)
					{
						s[i]=x[i];
					}
					length=len;
				}
				else
				{
					for(i=length-1;i>=index;i--)
					{
						s[i+len]=s[i];
					}
					for(i=0;i<len;i++)
					{
						s[index+i]=x[i];
					}
					length=length+len;
				}
				

		}
		else if(qtype=='?')
		{
				scanf("%d%d",&index,&len);
				for(i=0;i<len;i++)
					printf("%c",s[index-1+i]);
				printf("\n");
			
		}
	
	}
		return 0;
	}