// average of 3 integers
#include<stdio.h>
#include<math.h>
int main(){
    //intializing & declaring the 3 integers
    int a,b,c;
    //intializing & declaring the average 
    float avg;
    //prompting user for 1st integer
    printf("Enter first integer: ");
    scanf("%d", &a);
    //prompting user for 2nd integer
    printf("Enter second integer: ");
    scanf("%d", &b);
    //prompting user for 3rd integer
    printf("Enter third integer: ");
    scanf("%d", &c);
    // average
    avg = (float)(a+b+c)/3;
    printf("\nAverage of Three Numbers : %f",avg);
    return 0;
}
