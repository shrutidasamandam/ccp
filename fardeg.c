// converting farenheit into degree celsius 
#include <stdio.h>
int main(){
    //declaring & intializing variables
    float celsius, fahrenheit ;
    //input temperature as fahrenheit
    printf("Enter the fahrenheit: ");
    scanf("%f", &fahrenheit);
    //fahrenheit to celsius conversion formula
    celsius = (fahrenheit-32)*5/9;
    printf("%f Degrees Celsius", celsius);
    return 0;
}
