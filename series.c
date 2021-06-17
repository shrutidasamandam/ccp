#include <stdio.h>
#include <math.h>
int main(){
    int n;
    float i,sum=0;
    printf("Enter amount of terms you would like: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        sum = sum+(i/(i+1));
    }
    printf("The sum of the series is: %f", sum);
}