#include <stdio.h>
#include <stdlib.h>

int main(){
    int i, num, arr[10], largest=-1000, smallest=1000;
    // asking for size of array
    printf("Enter size of array: ");
    scanf("%d", &num);
    // array elements
    printf("Enter array elements: ");
    for(i=0; i<num;i++){
        scanf("%d", &arr[i]);
    }
    // find greatest element
    int largestPosition = 0;
    int smallestPosition = 0;
    for(int j=0;j<num;j++)
    {
        if(arr[j]>largest)
        {
            largest=arr[j];
            largestPosition = j;
        }
        if(arr[j]<smallest)
        {
            smallest=arr[j];
            smallestPosition = j;
        }
    }
    printf("\nThe greatest number is %d and at index %d", largest, largestPosition);
    printf("\nThe greatest smallest is %d and at index %d", smallest, smallestPosition);
    printf("\nNew array is: ");

    arr[largestPosition]=smallest;
    arr[smallestPosition]=largest;
    for(i=0;i<num;i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
