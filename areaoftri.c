/find area of a triangle given its sides as input 
#include<stdio.h>
#include<math.h>
int main(){
    // intializing & declaring variables
    double a,b,c,s,area;
    // prompting user input for first side
    printf("\nEnter the 1st side of a triangle: ");
        scanf("%lf",&a);
    // prompting user input for second side
    printf("\nEnter the 2nd side of a triangle: ");
        scanf("%lf",&b);
    // prompting user input for the third side
    printf("\nEnter the 3rd side of a triangle: ");
        scanf("%lf",&c);
    // semiperimeter of herons equation
    s=(a+b+c)/2;
    // full area equation using heron's formula
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    // printing the area
    printf("\nArea of the triangle = %lf", area);
    return 0;
}
