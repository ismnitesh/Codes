#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,cnt;
	scanf("%d",&t);
	while(t--)
	{	
		cnt=0;
		scanf("%d",&n);
		while(n)
		{
			if(n%10==4)
				cnt++;
			n/=10;
		}
		printf("%d\n",cnt);
	}
	return 0;
}