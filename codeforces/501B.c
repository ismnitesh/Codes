#include<stdio.h>
#include<string.h>
int main()
{
	int q,v[1005],i,j,k;
	char s[1005][25],f[1005][25],ans_s[1005][25],ans_f[1005][25];
	scanf("%d",&q);
	for(i=0;i<q;i++)
	{
		v[i]=0;
		scanf("%s %s",&s[i],&f[i]);
	}
	k=0;
	for(i=0;i<q;i++)
	{
		if(v[i]==0)
		{
			strcpy(ans_s[k],s[i]);
			strcpy(ans_f[k],f[i]);
			for(j=i+1;j<q;j++)
			{
				if(!strcmp(s[j],ans_f[k]))
				{
					strcpy(ans_f[k],f[j]);
					v[j]=1;
				}
			}
			k++;
			v[i]=1;
		}
	}
	printf("%d\n",k);
	for(i=0;i<k;i++)
	{
		printf("%s ",ans_s[i]);
		printf("%s\n",ans_f[i]);
	}
	return 0;
}