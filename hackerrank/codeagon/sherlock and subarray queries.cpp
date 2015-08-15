#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i,a[100004],l_max[100004],r_max[100003],l_cnt[100004],r_cnt[100004];
	cin >> n >> m;
	int cnt=0,max=0;
	for(i=0;i<n;i++)
	{
		cin >> a[i];
		if(a[i]==max)
			cnt++;
		if(a[i]>max)
		{
			cnt=1;
			max=a[i];
			l_max[i]=max;
			l_cnt[i]=1;
		}
		else
		{
			l_max[i]=max;
			l_cnt[i]=cnt;
		}
	}
	cnt=0;
	max=0;
	for(i=n-1;i>=0;i--)
	{
		if(a[i]==max)
			cnt++;
		if(a[i]>max)
		{
			cnt=1;
			max=a[i];
			r_max[i]=max;
			r_cnt[i]=1;
		}
		else
		{
			r_max[i]=max;
			r_cnt[i]=cnt;
		}	
	}
	int l,r;
	while(m--)
	{
		cin >> l >> r;
		l--;
		r--;
		if(l==0)
			cout << l_cnt[r] << endl;
		else if(r==n-1)
			cout << r_cnt[l] << endl;
		else if(l_max[r]>l_max[l-1])
		{
			cout << l_cnt[r] << endl;
		}
		else if(l_max[r]==l_max[r])
		{
			if(l_cnt[r]>l_cnt[l-1])
				cout << l_cnt[r]-l_cnt[l-1] << endl;
			else
			{
				if(r_max[l]>r_max[r+1])
					cout << r_cnt[l] << endl;
				else if(r_max[l]==r_max[r+1])
				{
					if(r_cnt[l]>r_cnt[r+1])
						cout << r_cnt[l]-r_cnt[r+1] << endl;
					else
					{
						max=0,cnt=0;
						for(i=l;i<=r;i++)
						{
							if(a[i]==max)
								cnt++;
							else if(a[i]>max)
							{
								cnt=1;
								max=a[i];
							}
						}
						cout << cnt << endl;
					}
				}
			}
		}
	}
	return 0;
}