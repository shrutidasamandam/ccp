//develop c program to enter number & calc sum of digits
#include <stdio.h>
int main()
{
    // integer a stands for the integer that the user inputs
    // integer b stands for the output of the calculate sum
    // remainder used to the split the number into individual values, mod gives us remainders
   int a, b,remainder;
   int sum=0;
   // initializing and declaring sum to 0 intially
   // user input
   printf("Enter an integer\n");
   scanf("%d", &a);
   // setting user input and the output equal to each other 
   b=a;
   // while loop to keep on splitting number until it can not be split anymore, keeps on looping until the loop ends
   while (b!=0){
    // modulus operator gives the remainder
       remainder=b%10;
    // adds remainder to the sum value (initially 0)
       sum=sum+remainder;
    // when you divide the int by 10, you get the int value
       b=b/10;
   }
   // prints the sum of digits
   printf("\nSum of digits of = %d", sum);
   return 0;
}