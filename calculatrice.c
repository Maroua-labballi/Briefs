#include <stdio.h>
#include <stdlib.h>

int main(){

   char operator;
   double num1;
   double num2;
   double result;

   printf("\nEnter an operator (+ - * / q): ");
   scanf("%s", &operator);
   

   if (operator == 'q'){

      printf ("End of operations");
      exit (0);

   }else{

      printf("\nEnter number 1: ");
      scanf("%lf", &num1);

      printf("\nEnter number 2: ");
      scanf("%lf" , &num2);

      switch(operator){
         case '+':
            result = num1 + num2;
            printf("\nresult:%.2lf", result);
            break;
         case '-':
            result = num1 - num2;
            printf("\nresult: %.2lf", result);
            break;
         case '*':
            result = num1 * num2;
            printf("\nresult: %.2lf", result);
            break;
         case '/' :
            if (num2==0){
               printf ("%c is not valid" , result);
               }else{
               printf("\nresult =%.2lf",num1/num2);}
            break;
        
      }
   }
   return 0; 
}


















