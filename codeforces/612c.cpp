#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	stack <char> st;
	cin >> s;
	int cnt=0;
	int flag=0;
	for(int i=0;i<s.size();i++)
	{
		if(s[i]=='['||s[i]=='{' || s[i]=='('||s[i]=='<')
			st.push(s[i]);
		else
		{
			char c;
			if(!st.empty())
				c=st.top();
			if(st.empty() || c==']' || c=='}' || c==')' || c=='>')
			{
				flag=1;
				cout << "Impossible";
				break;
			}
			else
			{
				if(s[i]=='}' && c=='{')
					st.pop();
				else if(s[i]==']' && c=='[')
					st.pop();
				else if(s[i]==')' && c=='(')
					st.pop();
				else if(s[i]=='>' && c=='<')
					st.pop();
				else
				{
					cnt++;
					st.pop();
				}
			}
		}
	}
	if(!st.empty() && flag==0)
	{
		cout << "Impossible";
		flag=1;
	} 
	if(flag==0)
	cout << cnt;
	return 0;
}