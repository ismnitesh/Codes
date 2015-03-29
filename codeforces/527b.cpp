#include<bits/stdc++.h>
using namespace std;
int main()
{
	int l,i,count,x,y,w,z,j,k;
	vector <int> a,hash1[27],hash2[27];
	char s[200003],t[200003];
	scanf("%d",&l);
	scanf(" %s",s);
	scanf(" %s",t);
	count=0;
	for(i=0;i<l;i++)
	{
		if(s[i]!=t[i])
		{
			a.push_back(i);
			hash1[s[i]-'a'].push_back(i);
			hash2[t[i]-'a'].push_back(i);
			count++;
		}
	}
//	printf("cnt: %d\n",count);
	if(count==1)
	{
		printf("1\n");
		printf("-1 -1");
	}
	else
	{
		int flag=0;
		for(i=0;i<27;i++)
		{
			if(flag!=2)
			{
				if(hash1[i].size()!=0 && hash2[i].size()!=0)
				{
					flag=1;
					x=hash1[i][0]<hash2[i][0]?hash1[i][0]:hash2[i][0];
					y=hash1[i][0]<hash2[i][0]?hash2[i][0]:hash1[i][0];
					x++;
					y++;
				}
			}
			if(hash1[i].size()!=0 && hash2[i].size()!=0)
			{
				for(j=0;j<hash2[i].size();j++)
				{
					for(k=0;k<hash1[i].size();k++)
					{
						if(t[hash1[i][k]]==s[hash2[i][j]] && hash2[i][j]!=hash1[i][k] )
						{
							flag=2;
							w=hash1[i][0]<hash2[i][0]?hash1[i][0]:hash2[i][0];
							z=hash1[i][0]<hash2[i][0]?hash2[i][0]:hash1[i][0];
							w++;
							z++;

			count-=2;
			printf("%d\n",count);
			printf("%d %d",w,z);
			return 0;
						}
					}
				}
			}		
		}
		if(flag==0)
		{
			printf("%d\n",count);
			printf("-1 -1");
		}
		else if (flag==2)
		{
			count--;
			count--;
			printf("%d\n",count);
			printf("%d %d",w,z);
		}
		else
		{
			count--;
			printf("%d\n",count);
			printf("%d %d",x,y);
		}
	}
	return 0;
}