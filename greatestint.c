#include <stdio.h>
int main()
{
      // declaring & initializing the 3 integers
        int A, B, C;
      // prompting users to enter what numbers they would like to find the greatest integer of 
        printf("Enter three numbers: ");
      // scanning the 3 integers
        scanf("%d %d %d", &A, &B, &C);
      // checks to see if A is the greatest number, if it is "A is the largest number" will print out
        if (A >= B && A>= C)
           printf("%d is the largest number: ", A);
      // checks to see if B is the greatest number, if it is "B is the largest number" will print out
        else if (B >= A && B>= C)
           printf("%d is the largest number: ", B);
      // checks to see if C is the greatest number if both B and A are not greater than C, if it is "C is the largest number" will print out
        else 
           printf("%d is the largest number: ", C);
      // returns 0 as the ending
        return 0;
}
