//find distance between 2 points
#include<stdio.h>
#include <math.h>

int main() {
    //declaring & intializing variables
	float x1, y1, x2, y2;
    float distance;
    //x of the first point
	printf("Input x1: ");
	scanf("%f", &x1);
    //y of the first point
	printf("Input y1: ");
	scanf("%f", &y1);
    //x of the second point
    printf("Input x2: ");
	scanf("%f", &x2);
    //y of the second point
	printf("Input y2: ");
	scanf("%f", &y2);
    //distance of both of the points
	distance = ((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1));
	printf("\nDistance between the said points: %f", sqrt(distance));
	return 0;
}
