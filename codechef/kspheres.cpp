#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,m,c,a[1002],b[1002],num,sum=0;
	long long int mat[1001][1001];
	cin >> n >> m >> c;
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	long long int max_a=0,max_b=0;
	for(int i=0;i<n;i++)
	{
		cin >> num;
		max_a=max(max_a,num);
		a[num]++;
	}
	for(int i=0;i<m;i++)
	{
		cin >> num;
		max_b=max(max_b,num);
		b[num]++;
	}
	
	long long int max_ab=min(max_a,max_b);
	
	for(int i=0;i<=max_ab;i++)
		a[i]=a[i]*b[i];
	
	for(int i=1;i<=max_ab;i++){
		for(int j=1;j<i;j++){
			mat[i][j]=a[i]*a[j];
			sum+=mat[i][j];
		}
	}
	cout << sum;
	int i=2;
	c=c-1;
	while(c--)
	{
		if(i>max_ab)
			cout << " 0";
		else
		{
			long long int j=i,k=1,sum_tmp=0;
			while(j<=max_ab)
			{
				sum_tmp+=mat[j++][k++];
			}
			sum-=sum_tmp;
			cout << " "<<sum;
		}
		i++;
	}
	return 0;
}