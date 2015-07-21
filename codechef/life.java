import java.io.*;
import java.util.Scanner;
class life
{
	public static void main(String args[])
	{
		Scanner input = new Scanner(System.in);
		int n=input.nextInt();
		while(n!=42)
		{
			System.out.println(n);
			n=input.nextInt();
		}
	}
}