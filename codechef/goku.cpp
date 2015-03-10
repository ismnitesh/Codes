#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		if(n%2==0 && n>2)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
