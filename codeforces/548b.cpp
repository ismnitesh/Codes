#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,q,a[502][502],i,j,cnt,b[502],x,y,x_max;
	cin >> n >> m >> q;
	memset(a, 0, sizeof(a));
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=m; j++){
			cin >> a[i][j];
		}
	}
	x_max = 0;
	for (int i = 1; i<=n; i++){
		cnt = 0;x_max = 0;
		for(int j = 1; j<=m+1; j++){
			if (a[i][j] == 1){
				++cnt;
			}
			else{
				x_max = max(x_max, cnt);
				cnt = 0;
			}
		}
		b[i] = x_max;
	}
	while (q--){
		cin >> x >> y;
		a[x][y] = 1 - a[x][y];
		cnt = 0; x_max = 0;
		for (int i = 1; i<=m+1; i++){
			if (a[x][i] == 1){
				++cnt;
			}
			else{
				x_max = max(x_max, cnt);
				cnt = 0;
			}
		}
		b[x] = x_max;
		int res = 0;
		for(int i = 1; i<=n; i++) res = max(res, b[i]);
		cout << res << endl;
	}
	return 0;
}