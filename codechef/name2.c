#include<stdio.h>
#include<string.h>
inline void str(char a[],char b[])
{
		int i=0,j=0;
		while(i<25001)
		{
			if(a[i]=='\0')
			{
				printf("YES\n");
				break;
			}
			else if(b[j]=='\0')
			{
				printf("NO\n");
				break;
			}
			if(a[i]==b[j])
				i++;
			j++;
		}
}
int main()
{
	int t,l1,l2;
	char a[25004],b[25004];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s%s",a,b);
		l1=strlen(a);
		l2=strlen(b);
		if(l1<l2)
			str(a,b);
		else
			str(b,a);
	}
	return 0;
}