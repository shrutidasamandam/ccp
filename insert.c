#include <stdio.h>

int main(){
    int num,i,arr[200],insert,location;

    printf("Enter number of elements");
    scanf("%d", &num);

    printf("Enter the elements in array");
    for (i=0; i<num; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Enter element to be inserted ");
    scanf("%d", &insert);
    printf("Enter the location to insert");
    scanf("%d", &location);
    num++;
    for(int i=num;i>location;i--)
    {
        arr[i]=arr[i-1];
    }
      arr[location]=insert;
      for(int i=0;i<num;i++){
          printf("%d ",arr[i]);
      }
      return 0;
}
