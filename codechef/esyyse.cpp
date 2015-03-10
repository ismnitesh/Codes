#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int num;
		scanf("%d",&num);
		if(num==1)
			printf("1\n");
		else if(num%2==0)
			printf("%d\n",num);
		else
			printf("%d\n",num-1);
	}
	return 0;
}