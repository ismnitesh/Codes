#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,p,n,w,m,score[10004];
	string name;
	cin >> t;
	for(int z=1;z<=t;z++)
	{
		map<string,vector<int> > map_a;
		map<string,vector<int> >::iterator it;
		vector<pair<int,string> >v;
		cin >> p;
		for(int i=0;i<p;i++)
			cin >> score[i];
		cin >> n;
		while(n--)
		{
			cin >> w;
			for(int i=0;i<p;i++)
			{
				cin >> name;
				map_a[name].push_back(w*score[i]);
			}
		}
		cin >> m;
		for(it=map_a.begin();it!=map_a.end();it++)
			sort(it->second.rbegin(),it->second.rend());
		for(it=map_a.begin();it!=map_a.end();it++)
		{
			int sum=0;
			for(int i=0;i<m && i<it->second.size();i++)
				sum+=it->second[i];
			v.push_back(make_pair(-sum,it->first));
		}
		sort(v.begin(),v.end());
		cout << "Case #"<< z <<":\n";
		int rank=1;
		for(int j=0;j<v.size();j++){
			if(j>0 && v[j].first!=v[j-1].first)
				rank=j+1;
			cout << rank << ": " << v[j].second << endl;
		}
	}
	return 0;
}