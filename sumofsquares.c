#include <stdio.h>
int main() {
	int n;
    int i=0;
    int sum = 0;
    printf("Enter n value: ");
    scanf("%d", &n);
	for (i = 0; i <= n; i++) 
	{
		if(i%2 != 0) 
		{
          sum += (i*i);
		  printf("%d ", i);
		}
	}
    printf("\nSum of squares of first %d natural numbers = %d",n, sum);
	return 0;
}
