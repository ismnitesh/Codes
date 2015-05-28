#include <iostream>
#include <algorithm>
#include <string.h>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,ind;
	cin >> t;
	while(t--)
	{
		scanf("%d",&n);
		char s[n+1],s1[n+1],ans1[n+1],ans2[n+1];
		scanf("%s",s);
		strcpy(s1,s);
		sort(s1,s1+n);
	//	cout << s << " " << s1<<endl;
		i=0;
		int k=0;
		while(s[i]==s1[i])
		{
		//	printf("%c",s[i]);
			ans1[k++]=s[i++];
		}
		if(i<n-1)
		{
		//	printf("%c",s1[i]);
			ans1[k++]=s1[i];
			for(j=i;j<n;j++)
			{
				if(s[j]==s1[i])
					ind=j;
			}
			for(j=i;j<n;j++)
			{
				if(j!=ind)
					ans1[k++]=s[j];
				//	printf("%c",s[j]);
			}
		}

		i=n-1;
		k=n-1;
		while(s[i]==s1[i])
		{
		//	printf("%c",s[i]);
			ans2[k--]=s[i--];
		}
		if(i>0)
		{
		//	printf("%c",s1[i]);
			ans2[k--]=s1[i];
			for(j=i;j>=0;j--)
			{
				if(s[j]==s1[i])
					ind=j;
			}
			for(j=i;j>=0;j--)
			{
				if(j!=ind)
					ans2[k--]=s[j];
				//	printf("%c",s[j]);
			}
		}
		if(strcmp(ans1,ans2)<0)
			for(i=0;i<n;i++)
				printf("%c",ans1[i]);
		else
			for(i=0;i<n;i++)
				printf("%c",ans2[i]);
		printf("\n");
	}
	return 0;
}