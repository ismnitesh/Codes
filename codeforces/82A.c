#include<stdio.h>
int main()
{
	int n;
	char s[][8]={"abc","Sheldon","Leonard","Penny","Rajesh","Howard"};
	scanf("%d",&n);
	while(n>5)
		n=n/2-2;
	printf("%s",s[n]);
	return 0;
}