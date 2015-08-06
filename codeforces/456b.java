import java.util.*;
import java.io.*;
public class b456
{
	public static void main(String args[])
	{
		String s;
		Scanner input = new Scanner(System.in);
		s = input.nextLine();
		int x = (int)(s.charAt(s.length()-1)-'0');
		if(x%2==1)
			System.out.print("0");
		else if((x/2)%2==1)
			System.out.print("0");
		else
			System.out.print("4");
	}
}