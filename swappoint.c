#include<stdio.h>
int main()
{
 int x,y,*a,*b,t;
 printf("Enter the value of x and y\n");
 scanf("%d%d", &x, &y);
 printf("Before Swapping , x = %d, y = %d\n", x, y);
 a = &x;
 b = &y;
 t = *b;
 *b = *a;
 *a = t;
 printf("After Swapping , x = %d, y = %d", x, y);
 return 0;
}