#include<stdio.h>
#define PI 3.14
main()
{
	float radius,circumference;
	printf("enter the radius of the circle radius,circumference");
	scanf("%f",&radius);
	circumference = 2*PI*radius;
	printf("circumference of the circle = %2f\n",circumference);
}
