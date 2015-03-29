#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,dig;
	string num;
	scanf("%d",&t);
	while(t--)
	{
		cin >> num;
		dig=num[0]-'0';
		if(dig%2==0)
			printf("EVEN\n");
		else
			printf("ODD\n");
	}
	return 0;
}