#include<stdio.h>
#include<string.h>
int main()
{
	int len,i,a[27];
	char s[104];
	scanf("%s",s);
	len=strlen(s);
	for(i=0;i<27;i++)
		a[i]=0;
	for(i=0;i<len;i++)
		a[s[i]-'a']++;
	int count=0;
	for(i=0;i<26;i++)
		if(a[i]>0)
			count++;
	if(count%2==0)
		printf("CHAT WITH HER!");
	else
		printf("IGNOURE HIM!");
	return 0;
}