import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

class Solution {

    public static void main(String args[]) {
     int[] a = new int[100];
       int i;
       Scanner input = new Scanner(System.in);
       String s = input.nextLine();
        for(i=0;i<26;i++)
            a[i]=0;
       for(i=0;i<s.length();i++)
           {
            if(s.charAt(i)>='A' && s.charAt(i)<='Z')
                a[s.charAt(i)-'A']++;
            else if(s.charAt(i)>='a' && s.charAt(i)<='z')
              a[s.charAt(i)-'a']++;
       }
        int f=1;
        for(i=0;i<26;i++)
            {
            if(a[i]==0)
                {
                f=0;
                break;
            }
        }
        if(f==1)
            System.out.println("pangram");
        else
            System.out.println("not pangram");
    }
}