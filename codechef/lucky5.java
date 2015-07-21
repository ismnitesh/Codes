import java.io.*;
import java.util.*;
class lucky5
{
	public static void main(String args[])
	{
		Scanner input=new Scanner(System.in);
		int t = input.nextInt();
		String  x = input.nextLine();
		while(t>0)
		{
			
			String s = input.nextLine();
			int i,cnt=0;
			for(i=0;i<s.length();i++)
			{
				if(s.charAt(i)!='4' && s.charAt(i)!='7')
					cnt++;
			}
			System.out.println(cnt);
			t--;
		}
	}
}