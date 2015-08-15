#include <bits/stdc++.h>
using namespace std;
void fun(string s,int size,stack<char>& st,map<string,int>& m,string str,int i,int *ans1,int *ans2)
{
	if(str.size()==size)
	{
		if(str==s)
			(*ans1)++;
		if(m.find(str)==m.end())
		{
			m[str]=1;
			(*ans2)++;
		}
		return;
	}
	if(i!=size)
	{
		st.push(s[i]);
		fun(s,size,st,m,str,i+1,ans1,ans2);
		st.pop();
	}
	if(!st.empty())
	{
		char ch=st.top();
		st.pop();
		fun(s,size,st,m,str+ch,i,ans1,ans2);
		st.push(ch);
	}
}
int main()
{
	int ans1=0,ans2=0;
	string s,str="";
	stack<char> st;
	map<string,int> m;
	cin >> s;
	fun(s,s.size(),st,m,str,0,&ans1,&ans2);
	cout << ans1 << " " << ans2;
	return 0;
}