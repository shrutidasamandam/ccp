#include <stdio.h>
#include <math.h>
int main()
{
    //declaring the 3 coefficients 
    float a, b, c;
    float firstroot, secondroot;
    float D, X, Y;
    // prompting user to put in values for quadratic equations
    printf("\nIn order to find the values of the quadratic equation (ax^2+bx+c): ");
    printf("\n\nValue of a: ");
    scanf("%f", &a);
    printf("\nValue of b: ");
    scanf("%f", &b);
    printf("\nValue of c: ");
    scanf("%f", &c);
    //finding discriminant 
    D = ((b*b) - (4*a*c));
    X= -(b)/(2*a);
    Y= sqrt(-D)/(2*a);

    // conditions of discriminat
    // if the discriminant is less than 0 = No roots
    if (D>=0) {
        firstroot = ((-b + sqrt(D))/(2*a));
        secondroot =((-b - sqrt(D))/(2*a));
        printf("\nTwo distinct and real roots exists: ");
        printf("Root 1 is %f\n", firstroot);
        printf("Root 2 is %f\n", secondroot);

    } else if (D==0) {
        firstroot = ((-b + sqrt(D)/2*a));
        printf("\nTwo equal and real roots exists: ");
        printf("Root 1 is %f\n", firstroot);
        printf("Root 2 is %f\n", firstroot);

    } else {
        printf("\nRoots Are Imaginary");
        printf("\n\nRoot 1 is %f + i%f\n", X, Y);
        printf("\nRoot 2 is %f - i%f\n", X, Y);
    }   
    return 0;
}
