//find area of a triangle given its sides as input w/o using functions
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


//find area of a triangle using functions
#include<stdio.h>
#include<math.h>
int aot(int a, int b, int c){
    double area, s;
    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    return area;
}
int main(){
    int a,b,c;
    double triangle;
    printf("\nEnter Side 1: ");
    scanf("%d", &a);
    printf("\nEnter Side 2: ");
    scanf("%d", &b);
    printf("\nEnter Side 3: ");
    scanf("%d", &c);
    triangle=aot(a,b,c);
    printf("Area of triangle %.2lf", triangle);
    return 0;
}
