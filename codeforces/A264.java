import java.util.*;
import java .io.*;
public class A264
{
	public static void main(String args[])
	{
		int i;
		String s;
		BufferedReader bi = new BufferedReader(new InputStreamReader(System.in));
		s=bi.readLine();
		for(i=0;i<s.length();i++)
		{
			if(s.charAt(i)=='r')
				System.out.println(i+1);
		}
		for(i=s.length()-1;i>=0;i--)
		{
			if(s.charAt(i)=='l')
				System.out.println(i+1);
		}
	}
}