#include<iostream>
#include<cstdio>
#include<vector>
#include<queue>
#include<cstring>
using namespace std;
int main()
{
	int t,n,m,a[100005],l,r,temp,i,flag,j;
	bool vis[100005];
	vector<int>v[100005];
	queue<int> q;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&n,&m);
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		while(m--)
		{
			scanf("%d%d",&l,&r);
			if(l!=r)
			{
				v[l].push_back(r);
				v[r].push_back(l);
			}
		}
		for(i=1;i<=n;i++)
		{
			int flag=0;
			//memset(vis, false,sizeof(vis));
			for(j=0;j<100005;j++)
			{
				vis[j]=false;
			}
			q.push(i);
			while(!q.empty())
			{
				int k=q.front();
				q.pop();
				for(j=0;j<v[k].size();j++)
				{
					if(v[k][j]==a[i])
					{
						flag=1;
						while(!q.empty())
						{
							q.pop();
						}
						break;
					}
					 if(!vis[v[k][j]]) 
					{ 
                    	vis[v[k][j]] = true; 
                    	q.push(v[k][j]);
                	} 
				}

			}
			if(flag==0)
			{
				printf("Impossible\n");
				break;
			}
		}
		if(flag==1)
		{
			printf("Possible\n");
		}
	}
	return 0;
}
