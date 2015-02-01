 #include<stdio.h>
   int main()
   {
       long long int t,u,a,i;
       scanf("%lld",&t);
       char s[1000002];
       while(t--)
       {
           i=0;
           u=0;
           a=0;
           scanf("%s",s);
           while(s[i])
           {
               if(s[i++]=='<')
                u++;
               else
                u--;
               if(u==0)
                a=i;
                else if(u<0)
                    break;
           }
           printf("%lld\n",a);
       }
       return 0;
   }