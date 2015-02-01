#include<stdio.h>
int lcm(int num1,int num2)
{
  int max;
  max=(num1>num2) ? num1 : num2; /* maximum value is stored in variable max */
  while(1)                       /* Always true. */
  {
      if(max%num1==0 && max%num2==0)
      {
      	return max;
      }
      ++max;
  }
}
int main()
{
	int t,a1,d1,n1,a2,d2,n2,t1,t2,val,x,ans,l;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&a1,&d1,&n1,&a2,&d2,&n2);
		t1=a1;
		t2=a2;
		while(t1!=t2)
		{
			if(t1>(a1+(n1-1)*d1))
				break;
			else if(t2>(a2+(n2-1)*d2))
				break;
			if(t1<t2)
			t1=t1+d1;
			else
			t2=t2+d2;
			if(t1==t2)
				val=t1;
		}
		l=lcm(d1,d2);
		if(n1<n2)
		{
			x=(val-a1)/d1+1;
			ans=((n1-1)*d1+a1-val)/l+1;
		}
		else
		{
			x=(val-a2)/d2+1;
			ans=((n2-1)*d2+a2-val)/l+1;
		}
		printf("%d\n",ans);
	}
	return 0;
}