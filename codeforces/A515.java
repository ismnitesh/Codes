import java.util.*;
import java.io.*;
public class A515
{
	public static void main(String args[])
	{
		int a,b,s;
		Scanner input = new Scanner(System.in);
		a = input.nextInt();
		b = input.nextInt();
		s = input.nextInt();
		s = s - Math.abs(a) - Math.abs(b);
		if(s>=0 && s%2==0)
			System.out.print("Yes");
		else
			System.out.print("No");
	}
}