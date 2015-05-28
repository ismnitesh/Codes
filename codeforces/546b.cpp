#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[6005],ans=0,num,i,j;
	cin >> n;
	memset(a,0,sizeof(a));
	for(i=0;i<n;i++)
	{
		cin >> num;
		a[num]++;
	}
	for(i=0;i<n;i++)
	{
		if(a[i]>1)
		{
			int k=i+1;
			while(a[i]>1)
			{
				for(j=k;;j++)
				{
					if(a[j]==0)
					{
						a[j]=1;
						break;
					}
				}
				k=j;
				a[i]--;
				ans+=j-i;
			}
		}
	}
	cout << ans;
	return 0;
}