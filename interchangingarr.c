#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num, arr[100], temp, a, b;

    printf("Enter size of array: ");
    scanf("%d", &num);

    printf("Enter array elements: ");
    for(i=0; i<num;i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the two positions to be exchanged: ");
    scanf("%d", &a);
    scanf("%d", &b);
    
    temp=arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
    for(i=0;i<num;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}