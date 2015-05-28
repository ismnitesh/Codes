#include <bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	if(a>b)
		return true;
	else
		return false;
}
int main()
{
	int num,a[10]={0};
	for(int i=0;i<6;i++)
	{
		cin >> num;
		a[num]++;
	}
	sort(a,a+10,cmp);
	if(a[0]>4)
	{
		if(a[0]==6)
			cout << "Elephant";
		else
			cout << "Bear";
	}
	else if(a[0]==4)
	{
		if(a[1]==2)
			cout << "Elephant";
		else
			cout << "Bear";
	}
	else
		cout << "Alien";
	return 0;
}