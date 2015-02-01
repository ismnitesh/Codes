#include<stdio.h>
int main()
{
  int t;
  scanf("%d",&t);
  while(t--)
    {
      int k, i, n, mod;
      char ch;
      scanf("%d",&k);
      if(k < 26)
	{
	  ch = 'a' + k;
	  for(i = 0; ch >= 'a' && k != 0; i++,ch--)
	    printf("%c",ch);
	}
      else
	{
	  n = k / 25;
	  mod = k % 25;
	  if(mod != 0)
	    {
	      ch = 'a' + mod;
	      for(i = 0; ch >= 'a'; i++,ch--)
		printf("%c",ch);
	    }
	  n = k / 25;
	  for(i = 0; i < n; i++)
	      printf("zyxwvutsrqponmlkjihgfedcba");
	} 
      printf("\n");
    }
  return 0;
}