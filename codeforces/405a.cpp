#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
	int n,i,num;
	vector <int> a;
	cin >> n;
	for(i=0;i<n;i++)
	{
		cin >> num;
		a.push_back(num);
	}
	sort(a.begin(),a.end());
	for(i=0;i<n;i++)
		cout << a[i] << " ";
	return 0;
}