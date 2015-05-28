#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,j,a[55],v[55],flag,sum,n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		flag=0;
		sum=0;
		for(i=1;i<=n;i++)
		{
			cin >> a[i];
			if(a[i]>n-1)
				flag=1;
			sum+=a[i];
		}
		if(sum!=n)
			flag=1;
		if(flag==1)
		{
			cout << "-1\n";
			continue;
		}
		else
		{
			i=1;
			j=1;
			while(j<=n)
			{
				if(a[i])
				{
					v[j]=i;
					j++;
					a[i]--;
				}
				else
					i++;
			}
			i=1;
			j=1;
			while(i<=n)
			{
				if(v[i]!=i)
					i++;
				else
				{
					if(v[i]!=j && v[j]!=i)
						swap(v[i],v[j]);
					else
						j++;
				}
			}
			for(i=1;i<=n;i++)
				cout << v[i] << " ";
			cout << endl;
		}
	}
	return 0;
}