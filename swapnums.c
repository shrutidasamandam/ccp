#include<stdio.h>
int swapFunctions(x,y){ 
    int temp = x;
    x = y;
    y = temp;
    printf("\nThe value of x is: %d", x);
    printf("\nThe value of y is: %d", y);
    return 0;
}
int main()
{   
    int x, y;
    int swapped;
    printf("Enter Value of x: ");
    scanf("%d", &x);
    printf("Enter Value of y: ");
    scanf("%d", &y);
    swapped = swapFunctions(x,y);
    return 0;
}