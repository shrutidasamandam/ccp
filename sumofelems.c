#include <stdio.h>

int main(){
    int i,num,arr[200],sum=0;
    printf("Enter Size Of The Array: ");
    scanf("%d", &num);
    printf("Enter Elements Of The Array: ");
    for(int i=0; i<num;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++){
        sum=sum+arr[i];
    }
    printf("Sume of all elements = %d", sum);
    return 0;
}
