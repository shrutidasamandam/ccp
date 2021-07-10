#include<stdio.h>

int main(){
   int num1, num2, sum, diff, prod, rem;
   float div;
   int *p = &num1, *q = &num2;
   printf("Enter number 1: ");
   scanf("%d", p);
   printf("Enter number 2: ");
   scanf("%d", q);

   sum = *p + *q;
   diff = *p - *q;
   prod = *p * *q;
   div = (float) *p / *q;
   rem = *p % *q;

   printf("Sum of 2 numbers =%d\n", sum);
   printf("Difference of 2 numbers =%d\n", diff);
   printf("Product of 2 numbers =%d\n", prod);
   printf("Division =%f\n", div);
   printf("Remainder =%d\n", rem);

   return 0;   
}
