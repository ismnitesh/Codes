#include<stdio.h>
#include<string.h>
int main()
{
	int b[100005],len,i,j;
	char a[100005];
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
		b[i]=999999;
	b[0]=0;
	b[1]=1;
	for(i=0;i<len;i++)
	{
		if(i>1)
		{
			if(b[i-1]>b[i]+1)
				b[i-1]=b[i]+1;
		}
			for(j=i-1;j<len;j++)
			{
				if(a[i]==a[j])
				{
					if(b[j]>b[i]+1)
						b[j]=b[i]+1;
				}
			}
			if(b[i+1]>b[i]+1)
				b[i+1]=b[i]+1;
	}
	//for(i=0;i<len;i++)
	//	printf("%d ",b[i]);
	printf("%d\n",b[len-1]);
	return 0;
}