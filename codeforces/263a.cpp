#include <iostream>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	int i,j,a[5][5],ind_i,ind_j;
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			cin >> a[i][j];
			if(a[i][j]==1)
			{
				ind_i=i;
				ind_j=j;
			}
		}
	}
	cout << abs(ind_i-2)+abs(ind_j-2);
	return 0;
}