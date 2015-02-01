#include<stdio.h>
#include<string.h>

inline int func(char a)
{
	int i;
	i=a;
	return (i-97);
}

int main()
{
	int t,len,j,inst,i;
	char a[1005];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",a);
		len=strlen(a);
		j=func(a[0]);
		inst=len+1;
		for(i=1;i<len;i++)
		{
			if(func(a[i])<j)
			{
				inst=inst+26-j+func(a[i]);
				j=func(a[i]);
			}
			else if(j<func(a[i]))
			{
				inst=inst+func(a[i])-j;
				j=func(a[i]);
			}
		}
	//	printf("%d\n%d\n",len,inst);
		if(inst<=(len*11))
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}