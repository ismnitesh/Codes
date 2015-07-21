#include <bits/stdc++.h>
using namespace std;
int arr[106];
void init()
{
	for(int i=0;i<105;i++)
		arr[i]=0;
}
int fun(int w,int m,int arr[])
{
	if(m==0)
		return 1;
	if(m<0)
		return 0;


	int tmp=1,cnt=0,sum=1;
	while(tmp*w<=m)
	{
		cnt++;
		tmp*=w;
		sum+=tmp;
	}
	if(sum==m)
		return 1;
	if(tmp==m && arr[cnt]==0)
		return 1;
	if(sum<m)
	{
		if(arr[cnt+1]==1)
			return 0;
		else
		{
			arr[cnt+1]=1;
			return fun(w,tmp*w-m,arr);
		}
	}
	else
	{
		if(arr[cnt]==1)
			return 0;
		else
		{
			arr[cnt]=1;
			return fun(w,m-tmp,arr);
		}
	}
}
int main()
{
	long long int m,w,ans,x;
	init();
	cin >> w >> m;
	ans=0;
	if(m==1 || w==2)
		ans=1;
	ans=ans||fun(w,m,arr);
	// ans=ans||fun(w,m,arr);
	// init();
	// ans=ans||fun(w,m-w,arr);
	// init();
	// ans=ans||fun(w,w-m,arr);
	if(ans==1)
		cout << "YES";
	else
		cout << "NO";
	return 0;
}