#include<bits/stdc++.h>
using namespace std;
int main()
{
	map< int, vector <int> >m1;
	int n,m,u,v;
	cin >> n >> m;
	int i,j;
	int a[10001];
	for(i=0;i<10001;i++)
		a[i]=0;
	for(i=0;i<m;i++)
	{
		cin >> u >> v;
		m1[u].push_back(v);
		m1[v].push_back(u);
	}
	stack<int> st;
	st.push(1);
	int temp,l;
	int flag=0;
	while(!st.empty())
	{
		temp=st.top();
		st.pop();
		l=m1[temp].size();
		a[temp]=2;
		for(j=0;j<l;j++)
        {
            if(a[m1[temp][j]]==1)
            {
                flag=1;
                break;
            }
            if(a[m1[temp][j]]==0)
            {
        	    st.push(m1[temp][j]);
            	a[m1[temp][j]]=1;
        	}
    	}
    	if(flag==1)
        	break;
    }
	for(i=1;i<=n;i++)
    {
        if(a[i]==0)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
        cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;
    return 0;
}