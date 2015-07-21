import java.util.*;
import java.io.*;
public class B465
{
	public static void main(String args[])
	{
		int n,i,f,ans;
		int[] a;
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		a = new int[n];
		for(i=0;i<n;i++)
			a[i] = input.nextInt();
		f=0;
		ans=0;
		for(i=0;i<n;i++)
		{
			if(a[i]==1 && f==0)
			{
				f=1;
				ans+=2;
			}
			else if(a[i]==1 && f==1)
			{
				ans++;
			}
			else
				f=0;
		}
		if(ans>0)
			ans--;
		System.out.print(ans);
	}
}