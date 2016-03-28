import java.util.Scanner;
class Flow001
{
	public static void main(String args[])
	{
		Scanner in = new Scanner(System.in);
		int t,a,b,sum;
		t=in.nextInt();
		while(t>0)
		{
			a=in.nextInt();
			b=in.nextInt();
			sum=a+b;
			System.out.println(sum);
			t--;
		}
	}
}