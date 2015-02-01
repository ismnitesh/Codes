#include <stdio.h>
 
int main() {
 
char exp[400];
char opr[200];
unsigned long n;
int i;
int j = -1;
 
scanf("%d", &n);
 
while (n--) { 
      scanf("%s", &exp);
      printf("\n");
      
      for (i = 0; exp[i]; i++) {
          if (exp[i] == '(') {
             continue;
          }
          else if (exp[i] == '+' || exp[i] == '-' || exp[i] == '*' || exp[i] == '/' || exp[i] == '^') {
             j++;         
             opr[j] = exp[i];
          }
          else if (exp[i] != ')') {
               printf("%c", exp[i]);         
          }
          else {     
               printf("%c", opr[j]);
               j--;
          }
          }
}
 
      return 0;
}