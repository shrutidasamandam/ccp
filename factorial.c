#include<stdio.h>  
int main()    
{    
 int i,n;  
 int product=1;
 printf("Enter a n: ");    
  scanf("%d",&n);    
    for(i=1;i<=n;i++){    
      product=product*i;    
  }    
  printf("Factorial of %d is: %d",n,product);    
return 0;  
}   