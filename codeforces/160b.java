import java.util.*;
import java.io.*;
public class B160
{
	public static void main(String args[])
	{
		int n,i,flag;
		int[] a,b;
		String s; 
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		BufferedReader z = new BufferedReader(new InputStreamReader(System.in));
        a = new int[n];
		b = new int[n];
        for(i=0;i<n;i++)
        {
        	char ch = (char) z.read();
        	a[i]= (int)(ch - '0');
        }
        for(i=n;i<2*n;i++){
        	char ch = (char) z.read();
			b[i-n]=(int)(ch-'0');
        }
		Arrays.sort(a);
		Arrays.sort(b);
		flag=0;
		if(a[0]>b[0])
		{
			for(i=1;i<n;i++)
			{
				if(a[i]<b[i])
				{
					flag=1;
					System.out.print("NO");
					break;
				}
			}
		}
		else if(a[0]<b[0])
		{
			for(i=1;i<n;i++)
			{
				if(a[i]>b[i])
				{
					flag=1;
					System.out.print("NO");
					break;
				}
			}	
		}
		else
		{
			flag=1;
			System.out.print("NO");
		}
		if(flag==0)
			System.out.print("YES");
	}
}