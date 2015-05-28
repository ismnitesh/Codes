#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	vector <string> s;
	s.push_back("zero");
	s.push_back("one");
	s.push_back("two");
	s.push_back("three");
	s.push_back("four");
	s.push_back("five");
	s.push_back("six");
	s.push_back("seven");
	s.push_back("eight");
	s.push_back("nine");
	s.push_back("ten");
	s.push_back("eleven");
	s.push_back("twelve");
	s.push_back("thirteen");
	s.push_back("fourteen");
	s.push_back("fifteen");
	s.push_back("sixteen");
	s.push_back("seventeen");
	s.push_back("eighteen");
	s.push_back("nineteen");
	s.push_back("twenty");
	s.push_back("thirty");
	s.push_back("forty");
	s.push_back("fifty");
	s.push_back("sixty");
	s.push_back("seventy");
	s.push_back("eighty");
	s.push_back("ninety");
	cin >> n;
	if(n<=20)
		cout << s[n];
	else if(n%10==0)
	{
		n/=10;
		cout << s[18+n];
	}
	else
	{
		int x=n%10;
		int y=n/10;
		cout << s[18+y] << "-" << s[x];
	}
	return 0;
}