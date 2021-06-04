#include <stdio.h>
int main() {
	int m,n;
    int i=0;
    printf("Enter m value: ");
    scanf("%d", &m);
    printf("Enter n value: ");
    scanf("%d", &n);
	for (i = m; i <= n; i++) 
	{
		if(i%2 == 0) 
		{
		  printf("%d ", i);
		}
	}
	return 0;
}
