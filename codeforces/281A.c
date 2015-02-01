#include<stdio.h>
int main()
{
	char s[1004];
	scanf("%s",s);
	if(s[0]>='a' && s[0]<='z')
	{
		s[0]=s[0]-'a'+'A';
	}
	printf("%s",s);
	return 0;
}