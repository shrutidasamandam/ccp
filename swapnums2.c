#include <stdio.h>
int swapNums(int x, int y)
{
    x = x + y;
    y = x - y;
    x = x - y; 
    printf("After Swapping: x = %d, y = %d", x, y);
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
    swapped = swapNums(x,y);
    return 0;
}