#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,num;
	vector<int> v1,v2,v3;
	cin >> n;
	while(n--)
	{
		cin >> num;
		if(num==0)
			v3.push_back(num);
		else if(num<0)
			v1.push_back(num);
		else
			v2.push_back(num);
	}
	int k=0;
	if(v2.size()==0)
	{
		v2.push_back(v1[k++]);
		v2.push_back(v1[k++]);
	}
	if(v1.size()%2==1)
	{
		cout << v1.size()-k;
		for(int i=k;i<v1.size();i++)
			cout << " " << v1[i];
	}
	else
	{
		cout << v1.size()-k-1;
		v3.push_back(v1[k++]);
		for(int i=k;i<v1.size();i++)
			cout << " " << v1[i];
	}
	cout << endl;
	cout << v2.size();
	for(int i=0;i<v2.size();i++)
		cout << " " << v2[i];
	cout << endl;
	cout << v3.size();
	for(int i=0;i<v3.size();i++)
		cout << " " << v3[i];
	return 0;
}