#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,i,num,ind;
	vector < int> v;
	string f[100004],s[100004],ans[100004];
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> f[i] >> s[i];
	}
	for(i=0;i<n;i++)
	{
		cin >> num;
		v.push_back(num);
	}	
	ans[0]=min(f[v[0]-1],s[v[0]-1]);
//	cout << ans[0]<<endl;
	for(i=1;i<n;i++)
	{
		ind=v[i]-1;
		if(f[ind]<ans[i-1] && s[ind] < ans[i-1])
		{
			cout << "NO";
	//		cout << ind << " " <<i;
			return 0;
		}
		if(min(f[ind],s[ind])>ans[i-1])
			ans[i]=min(f[ind],s[ind]);
		else
			ans[i]=max(f[ind],s[ind]);
	//	cout << ans[i]<<endl;
	}
	cout << "YES";
	return 0;
}