#include<stdio.h>
int main(){
    int sumofdig = 0;
    int num,mod;
    printf("\nEnter the number you would like to be calculated: ");
    scanf("%d", &num);
    while(num!=0){
        mod = num%10;
        sumofdig = sumofdig+mod;
        num = num/10;
    }
        printf("\nThe Sum Of The Number Is %d", sumofdig);
        return 0;
    }
