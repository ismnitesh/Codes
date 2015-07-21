import java.io.BufferedWriter;
import java.util.InputMismatchException;
import java.util.NoSuchElementException;
import java.math.BigInteger;
import java.io.OutputStream;
import java.io.PrintWriter;
import java.io.Writer;
import java.io.IOException;
import java.util.Arrays;
import java.io.InputStream;
import java.io.OutputStreamWriter;
import java.util.Comparator;
import java.util.Scanner;
import java.io.*;

public class A461
{
	public static void main(String args[])
	{
		int n,i;
		long sum=0,ans;
		int[] a;
		Scanner input = new Scanner(System.in);
		n = input.nextInt();
		a = new int[n];
		for(i=0;i<n;i++){
			a[i] = input.nextInt();
			sum+=a[i];
		}
		Arrays.sort(a);
		ans=sum;
		for(i=0;i<n-1;i++)
		{
			ans+=sum;
			sum-=a[i];
		}
		System.out.print(ans);
	}
}