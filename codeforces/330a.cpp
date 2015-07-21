#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,r,c,row[12],col[12];
	char a[12][12];
	cin >> r >> c;
	for(i=0;i<r;i++)
		cin >> a[i];
	memset(row,0,sizeof(int)*r);
	memset(col,0,sizeof(int)*c);
	for (i=0;i<r;i++)
	{
		for (j=0;j<c;j++)
		{
			if(a[i][j]=='S')
			{
				row[i]=1;
				col[j]=1;
			}	
		}
	}
	int cnt_r=0,cnt_c=0;
	for(i=0;i<r;i++)
		if(row[i]==1)
			cnt_r++;
	for(i=0;i<c;i++)
		if(col[i]==1)
			cnt_c++;
	cout << (r*c)-(cnt_r*cnt_c);
	return 0;
}