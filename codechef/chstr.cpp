#include <bits/stdc++.h>
using namespace std;
int mod 1000000007
int powmod(int a,int n)
{
	int ans=1,d=1;
	while(n)

}
int C(int n,int r)
{
	if(r<n-r)
	{

	}
	else
	{

	}
}
int main()
{
	int t,n,q,k,i,j,x,flag,cnt,a[100005],z;
	string s,str;
	vector < string > v;
	cin >> t;
	while(t--)
	{
		cin >> n >> q;
		cin >> s;
		while(q--)
		{
			cnt=0;
			cin >> k;
			for(i=0;i<n;i++)
			{
				
				for(j=0;i+j<n;j++)
				{
					str = "";
					for(x=i;x<=i+j;x++)
						str+=s[x];
				//	cout << str << endl;
					flag=1;
					for(z=0;z<v.size();z++)
					{
						if(v[z]==str)
						{
							a[z]++;
							flag=0;
							break;
						}
					}
					if(flag)
						v.push_back(str);
				}
			}
			for(i=0;i<v.size();i++)
				if(a[i]>=k)
					cnt+=C(a[i],k);
			cout << cnt;
		}
	}
}