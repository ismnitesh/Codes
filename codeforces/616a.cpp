#include <bits/stdc++.h>
using namespace std;
int main()
{
	string a,b;
	cin >> a >> b;
	int i=0,j=0;
	while(a[i]=='0' && i<a.size())
		i++;
	while(b[j]=='0' && j<b.size())
		j++;
	if(a.size()-i == b.size()-j){
	while(i<a.size() && j<b.size())
	{
		if(a[i]==b[j])
		{
			i++;
			j++;
		}
		else if(a[i]<b[j])
		{
			cout << "<";
			return 0;
		}
		else if(a[i]>b[j])
		{
			cout << ">";
			return 0;
		}
	}
	cout << "=";
}
	else if(a.size()-i>b.size()-j){
		cout << ">";
	}
	else
		cout << "<";
	return 0;
}