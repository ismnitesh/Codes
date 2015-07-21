import java.io.*;
class Main
	{
	public static void main(String args[])throws IOException
	{
	BufferedReader in=new BufferedReader(new InputStreamReader(System.in));
	PrintWriter ob=new PrintWriter(System.out);
	int t=Integer.parseInt(in.readLine());
	while(t-->0)
	{
		String s=in.readLine();
		int l=s.length();
		int count=0;
		for(int i=0;i<l-1;i++)
		{
			if(s.charAt(i)==s.charAt(i+1))
			count+=1;
		}
		ob.println(count);
	}
	ob.flush();
}
} 