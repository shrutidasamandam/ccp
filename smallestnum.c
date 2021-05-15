//finding the smallest numbers out of 3 integers
#include <stdio.h>
int main()
{
      // declaring & initializing the 3 integers
        float A, B, C;
      // prompting users to enter what numbers they would like to find the smallest integer of 
        printf("Enter three numbers: ");
      // scanning the 3 integers
        scanf("%f %f %f", &A, &B, &C);
      // checks to see if A is the smallest number, if it is, "A is the smallest number" will print out
        if (A <= B && A<= C)
           printf("%.3f is the smallest number: ", A);
      // checks to see if B is the smallest number, if it is, "B is the smallest number" will print out
        else if (B <= A && B<= C)
           printf("%.3f is the smallest number: ", B);
      // checks to see if C is the smallest number if both B and A are not smaller than C, if it is "C is the smallest number" will print out
        else 
           printf("%.3f is the smallest number: ", C);
      // returns 0 as the ending
        return 0;
}