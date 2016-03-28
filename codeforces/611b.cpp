#include<bits/stdc++.h>
using namespace std;
int last_pos(long long int x)
{
	int ans=0,cnt=0;
	while(x)
	{
		cnt++;
		if(x%2==0)
			ans=cnt;
		x/=2;
	}
	return ans;
}
int pos(long long int x)
{
	int ans=0;
	while(x)
	{
		ans++;
		if(x%2==0)
			break;
		x/=2;
	}
	return ans;
}
int check(long long int x)
{
	int ans=0;
	while(x)
	{
		if(x%2==0)
			ans++;
		x/=2;
	}
	return ans;
}
int main()
{
	long long int a,b,n,ans=0,a1,b1,x=0,y=0,z,k;
	cin >> a >> b;
	n=a;
	z=b;
	k=a;
	if(a==b)
	{
		if(check(a)==1)
			cout << "1";
		else
			cout << "0";
	}
	else
	{
		while(z)
		{
			y=y+1;
			z>>=1;
		}
		while(k)
		{
			x=x+1;
			k>>=1;
		}

	//	cout << "x=" <<x << "y=" << y<<endl;

		long long int x1=x,y1=y;
		for(long long int i=x+1;i<y;i++)
			ans=ans+i-1;
		a1=0;
		b1=1;
		while(x)
		{
			a1=a1*2+1;
			x--;
		}
		y--;
		while(y)
		{
			b1=b1*2;
			y--;
		}
		if(x1!=y1)
		{
			for(long long int i=a;i<=a1;i++)
			{
				if(check(i)==1)
				{
					ans+=pos(i);
					break;
				}
			}
			for(long long int i=b;i>=b1;i--)
			{
				if(check(i)==1)
				{
					ans+=y1-pos(i);
					break;
				}
				else
				{
					ans+=y1-last_pos(i)-1;
					break;
				}
			}
		}
		else
		{
			if(check(a)==1)
			{
				ans+=pos(a);
			//	cout << "pos_a="<<pos(a)<<endl;
			}
			else
			{
				ans+=last_pos(a);
			//	cout << "last_a="<<last_pos(a)<<endl;
			}
			if(check(b)==1)
			{
				ans-=(pos(b)-1);
			//	cout << "pos_b="<<pos(b)<<endl;
			}
			else
			{
				if(last_pos(b)>0)
				ans-=(last_pos(b)-1);
			//	cout << "last_b"<<last_pos(b)<<endl;
			}
		}
		cout << ans;
	}
	return 0;
}