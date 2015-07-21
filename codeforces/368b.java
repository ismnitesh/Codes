import java.util.*;
import java.io.*;
public class b368
{
	public static void main(String args[])
	{
		int n,m,i,x;
		int[] a,ans,flag;
		a=new int[100006];
		ans=new int[100006];
		flag=new int[100005];
		Scanner input = new Scanner(System.in);
		n=input.nextInt();
		m=input.nextInt();
		for(i=1;i<=n;i++)
			a[i]=input.nextInt();
		for(i=0;i<100005;i++)
			flag[i]=0;
		ans[n]=1;
		flag[a[n]]=1;
		for(i=n-1;i>0;i--)
		{
			if(flag[a[i]]==0){
				ans[i]=ans[i+1]+1;
				flag[a[i]]=1;
			}
			else
				ans[i]=ans[i+1];
		}
		while(m>0)
		{
			x=input.nextInt();
			System.out.println(ans[x]);
			m--;
		}
	}
}