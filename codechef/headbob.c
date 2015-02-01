#include<stdio.h>
int main()
{
	int t,n,flag,i;
	char s[100005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		scanf("%s",s);
		flag=0;
		for(i=0;i<n;i++)
		{
			if(s[i]=='Y')
			{
				flag=1;
				break;
			}
			else if(s[i]=='I')
			{
				flag=2;
				break;
			}
		}
		if(flag==0)
			printf("NOT SURE\n");
		else if(flag==1)
			printf("NOT INDIAN\n");
		else
			printf("INDIAN\n");
	}
	return 0;
}